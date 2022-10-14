CC = gcc #compiler
CFLAGS = -Wall -Wextra -Werror #compiler flags
NAME = libft #name of file to be created
RM = rm -f #delete flags
HEADER = libft.h #header file
LIBFILE = libft.a


SRC	=	main.c \
		ft_atoi.c \
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


OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run:
	./$(NAME)

lib: $(OBJ)
	ar rcs $(LIBFILE) $(OBJ)

.PHONY: all clean fclean re run lib
