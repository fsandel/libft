/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:04:41 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/20 10:55:10 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef MAX_FD
#  define MAX_FD 128
# endif

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int			ft_atoi(const char *str);
void		ft_bzero(void *str, size_t n);
void		*ft_calloc(size_t nitems, size_t size);
int			ft_isalnum(int arg);
int			ft_isalpha(int arg);
int			ft_isascii(int arg);
int			ft_isdigit(int arg);
int			ft_isprint(int arg);
char		*ft_itoa(int n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
char		**ft_split(char const *s, char c);
char		*ft_strchr(char const *str, int c);
char		*ft_strdup(const char *s);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *str1, const char *str2, size_t num);
char		*ft_strnstr(const char *big, const char *small, size_t size);
char		*ft_strrchr(const char *str, int c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int chr);
int			ft_toupper(int chr);

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstiter(t_list *list, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

int			ft_printf(const char *str, ...);

char		*ft_rev_string(char *str);
int			ft_num_len(int n);
char		*ft_int_to_hex(unsigned long arg_int);
int			ft_unsi_num_len(unsigned int i);
void		ft_putunsi_fd(unsigned int nb, int fd);

char		*get_next_line(int fd);

int			ft_putnbr_base_fd(int n, char const *base, int fd);
char		*ft_itobase(int n, char *base, int len);

void		ft_err_print(char *str, char *s1, char *s2, char *s3);

char		**ft_arr_add_line(char **arr, char *line);
char		**ft_arr_dup(char **arr);
void		ft_arr_free(char **arr);
int			ft_arr_size(char **arr);
char		**ft_read_file(int fd);
char		*ft_str_append_chr(char *str, char chr);
char		*ft_str_append_str(char *first, char *second);
void		ft_putarr_fd(char **arr, int fd);

#endif
