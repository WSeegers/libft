/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:05:55 by WSeegers          #+#    #+#             */
/*   Updated: 2018/04/19 00:24:57 by WSeegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483647

typedef int t_bool;

# define TRUE 1
# define FALSE 0

typedef unsigned int t_wchar;

// Personal libft functions
void	ft_putchar_fd(t_wchar c, int fd);
void	ft_putchar(t_wchar c);
int		ft_putbyte(char b, int fd);
void	ft_putstr(char *str);

size_t	ft_intlen(int nbr);
char	*ft_itoa(int nbr);

// Required libft functions
int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);	
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);

#endif

/*
Functions still to be done

memset
memcpy
memccpy
memmove
memchar
memcmp
strcpy
strncpy
strcat
strchr
strrchr
strstr
strnstr
strcmp
strncmp
isalpha
isdigit
isalnum
isacii
isprint
toupper
tolower
*/
