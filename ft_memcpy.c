/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 02:04:35 by WSeegers          #+#    #+#             */
/*   Updated: 2018/05/04 12:24:58 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void cpy8(t_ulong *ld, const t_ulong *ls)
{
	ld[0] = ls[0];
	ld[1] = ls[1];
	ld[2] = ls[2];
	ld[3] = ls[3];
	ld[4] = ls[4];
	ld[5] = ls[5];
	ld[6] = ls[6];
	ld[7] = ls[7];
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	t_ulong			*ld;
	const t_ulong	*ls;
	t_uchar			*d;
	const t_uchar	*s;
	size_t			longsize;

	ld = (t_ulong*)dest;
	ls = (t_ulong*)src;
	longsize = sizeof(t_ulong);
	while (n > longsize * 8)
	{
		cpy8(ld, ls);
		n -= longsize * 8;
		ld += 8;
		ls += 8;
	}
	while (n > longsize)
	{
		*ld++ = *ls++;
		n -= longsize;
	}
	d = (t_uchar*)ld;
	s = (t_uchar*)ls;
	while (n--)
		*d++ = *s++;
	return (dest);
}
