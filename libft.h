#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

size_t			ft_strlen(const char *str);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *memblock, int searched, size_t size);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
void			*ft_memcpy(void	*dest, const void *source, size_t size);
void			*ft_memmove(void *destination, const void *source, size_t size);
void			*ft_memset(void *s, int c, size_t n);
char			*ft_strchr(const char *string, int searchedchar);
char			*ft_strdup(const char *src);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t length);
char			*ft_strnstr(const char *stack, const char *neddle, size_t size);
char			*ft_strrchr(const char *string, int searchedchar);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_itoa(int nb);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);

#endif
