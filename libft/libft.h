/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers.mauws@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:10:40 by wseegers          #+#    #+#             */
/*   Updated: 2018/04/26 00:14:02 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

# define EOF -1

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define INT_MIN_STR "-2147483648"

# define LONG_MAX 9223372036854775807
# define LONG_MIN -9223372036854775807 - 1

typedef int t_bool;

# define TRUE 1
# define FALSE 0

typedef unsigned int	t_wchar;
typedef unsigned int	t_uint;
typedef unsigned char	t_uchar;

void	ft_putchar_fd(t_wchar c, int fd);
void	ft_putchar(t_wchar c);
int		ft_putbyte(char b, int fd);
void	ft_putstr_fd(const char *str, int fd);
void	ft_putstr(const char *str);
void	ft_putnbr(int nbr);
void	ft_putnbr_fd(int nbr, int fd);
char	*ft_strnew(size_t n);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);

size_t	ft_intlen(int nbr);
char	*ft_itoa(int nbr);
long long ft_min(long long nbr1, long long nbr2);
long int ft_strtol(const char *nptr, char **endptr, int base);

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);	
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t maxlen);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	ft_strdel(char **as);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(t_uint, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *str, t_uint start, size_t len);
void	ft_strclr(char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_toascii(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isblank(int c);
int		ft_isspace(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
