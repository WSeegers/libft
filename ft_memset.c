/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 15:34:43 by WSeegers          #+#    #+#             */
/*   Updated: 2018/05/04 12:07:15 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set8(register t_ulong *lmem, register t_ulong lchr)
{
	lmem[0] = lchr;
	lmem[1] = lchr;
	lmem[2] = lchr;
	lmem[3] = lchr;
	lmem[4] = lchr;
	lmem[5] = lchr;
	lmem[6] = lchr;
	lmem[7] = lchr;
}

static void set1(void *lmem, int c, size_t n)
{
	t_uchar		*mem;

	if (!n || !lmem)
		return ;
	mem = (t_uchar*) lmem;
	while (n--)
		*mem++ = (t_uchar)c;
}


static long stackchar(int c)
{
	t_ulong lchr;

	lchr = (t_uchar)c;
	lchr |= lchr << 8;
	lchr |= lchr << 16;
	if (sizeof(lchr) == 8)
		lchr |= lchr << 32;
	return (lchr);
}

void	*ft_memset(void *s, int c, size_t n)
{
	t_ulong	*lmem;	
	t_ulong	lchr;
	size_t	longsize;

	if (!n)
		return (s);
	lchr = stackchar(c);
	lmem = (t_ulong*)s;
	longsize = sizeof(lchr);
	while (n >= longsize * 8)
	{
		set8(lmem, lchr);
		n -= 64;
		lmem += 8;
	}
	while (n >= longsize)
	{
		*lmem++ = lchr;
		n -= longsize;
	}
	set1(lmem, c, n);
	return (s);
}
