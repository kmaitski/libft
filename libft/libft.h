/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 16:41:00 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 23:25:40 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putchar(wchar_t c);
void				ft_putchar_fd(wchar_t c, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_rev_print(char *str);
void				ft_print_bits(unsigned char octet);

int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);

void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
size_t				ft_strlen(char const *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
int					ft_atoi(const char *string_ptr);
char				*ft_search_and_replace(char *str, char i, char j);
char				*ft_ulstr(char *str);
char				*ft_first_word(char *str);
char				*ft_last_word(char *str);
char				*ft_wdmatch(char *str1, char *str2);
char				*ft_strrev(char *str);
char				*ft_epur_str(char *str);
char				*ft_str_capitalizer(char *str);
char				*revwstr(char *str);
int					ft_atoi_base(const char *str, int str_base);
char				*ft_epur_str(char *str);
void				ft_brainfuck(char *brain_fuck_ptr);

char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_itoa(int n);
char				*ft_strdup(const char *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_strtrim(char const *s);

void				*ft_memalloc(size_t size);

void				*ft_memset(void *str, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);

void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *str1, const void *str2, size_t n);

void				ft_memdel(void **ap);
void				ft_strdel(char **as);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);

int					ft_toupper(int c);
int					ft_tolower(int c);

void				ft_swap(int *a, int *b);
int					ft_max(int *tab, unsigned int len);
int					ft_do_op(int number1, char sign, int number2);
int					ft_pgcd(unsigned int nbr1, unsigned int nbr2);
int					*ft_range(int start, int end);
void				ft_sortinttab(int *tab, unsigned int size);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstlast(t_list *head_node);
unsigned int		ft_lstsize(t_list *head_node);
t_list				*ft_lstn(t_list *head_node, size_t n);

void				ft_lstadd(t_list **alst, t_list *new_node);
void				ft_lstaddback(t_list **list, t_list *new_node);
void				ft_lstaddn(t_list **list, t_list *new_node, void *content);

unsigned char		ft_reverse_bits(wchar_t octet);

#endif
