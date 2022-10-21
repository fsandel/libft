# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 14:46:21 by fsandel           #+#    #+#              #
#    Updated: 2022/10/21 21:33:25 by fsandel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
EXEC			= exec.out
MAIN			= main.c

LIBNAME			= libft.a

SRCS=	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		\
		ft_substr.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_split.c \
		ft_itoa.c \
		ft_strtrim.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c 

BSRC = 	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS			= $(SRCS:.c=.o)

BONUS_OBJS		= $(BSRC:.c=.o)

all:			$(LIBNAME)

$(LIBNAME):		$(OBJS)
				ar rcs $(LIBNAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(LIBNAME)

re:				fclean $(LIBNAME)

bonus:			$(BONUS_OBJS) $(OBJS)
				ar rcs $(LIBNAME) $(BONUS_OBJS) $(OBJS)

run:			bonus
				$(CC) $(CFLAGS) $(MAIN) -L. -lft -o $(EXEC)
				./$(EXEC)

wclean:			fclean
				$(RM) $(EXEC)
				
.PHONY:			all clean fclean re bonus run
