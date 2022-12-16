# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 14:46:21 by fsandel           #+#    #+#              #
#    Updated: 2022/12/16 13:45:31 by fsandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
AFLAGS			= ar -rcs
NAME			= libft.a
OBJ_FILES		= $(SRC_FILES:.c=.o)
OBJ				= $(addprefix $(OBJ_DIR), $(OBJ_FILES))
OBJ_DIR			= ./obj/
SRC_DIR			= ./src/
SRC				= $(addprefix $(SRC_DIR), $(SRC_FILES))

SRC_FILES=		ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
				ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c\
				ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
				ft_strrchr.c ft_tolower.c ft_toupper.c\
				\
				ft_substr.c ft_strjoin.c ft_strmapi.c ft_split.c ft_itoa.c\
				ft_strtrim.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
				ft_putendl_fd.c ft_putnbr_fd.c\
				\
				ft_printf.c ft_printf_arg.c ft_printf_arg2.c ft_printf_utils.c\
				\
				ft_lstadd_front.c  ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c\
				ft_lstclear.c ft_lstsize.c ft_lstmap.c ft_lstlast.c ft_lstnew.c\
				\
				get_next_line.c\
				\
				ft_putnbr_base_fd.c ft_itobase.c

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(OBJ_DIR)
				@$(CC) $(CFLAGS) -c $< -o $@

all:				$(NAME)

$(NAME):			$(OBJ)
					@$(AFLAGS) $(NAME) $(OBJ)

clean:
					@$(RM) $(OBJ)
					@echo "cleaned $(NAME)"

fclean:				
					@make clean
					@$(RM) $(NAME)
					@echo "fcleaned $(NAME)"

re:					
					@make fclean
					@make all

.PHONY:				all clean fclean re
