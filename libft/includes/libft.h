#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void		ft_putchar(char c);
void		ft_putstr(char const *s);
int		ft_strlen(char const *str);
int		ft_strcmp(const char *s1, const char *s2);
void		ft_strclr(char *s);
void		*ft_memalloc(size_t size);
void		ft_memdel(void  **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_striter(char *s, void (*f)(char *));
char		*ft_strmap(char const *s, char (*f)(char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);
char		*ft_itoa(int n);
void		ft_putnbr(int n);
void 		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		*ft_memset(void *str, int c, size_t n);
void		*ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *str1, const void *str2, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *str1, const void *str2, size_t n);
const void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcp(const void *str1, const void *str2, size_t n);
char		*ft_strdup(const char *s);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strrchr(char *str, int c);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
size_t		ft_strlcat(char *dest, const char *src, size_t n);
char		*ft_strchr(const char *str, int c);
char		*ft_strstr(const char *haystack, const char *needle);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);





#endif
