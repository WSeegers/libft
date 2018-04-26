/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 15:34:43 by WSeegers          #+#    #+#             */
/*   Updated: 2018/04/26 22:30:58 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set64(register t_ulong *lmem, register t_ulong lchr)
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

static long stackchar(t_uchar chr)
{
	t_ulong lchr;

	lchr = chr;
	lchr |= lchr << 8;
	lchr |= lchr << 16;
	lchr |= lchr << 32;
	return (lchr);
}

void	*ft_memset(void *s, int c, size_t n)
{
	register t_ulong *lmem;	
	register t_ulong lchr;
	register t_uchar *mem;
	register t_uchar chr;

	if (!n)
		return (s);
	chr = (t_uchar) c;
	lchr = stackchar(chr);
	lmem = (t_ulong*)s;
	while (n >= 64)
	{
		set64(lmem, lchr);
		n -= 64;
		lmem += 8;
	}
	while (n >= 8)
	{
		*lmem++ = lchr;
		n -= 8;
	}
	mem = (t_uchar*) lmem;
	while (n--)
		*mem++ = chr;
	return (s);
}
