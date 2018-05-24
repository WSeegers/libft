/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 13:53:34 by WSeegers          #+#    #+#             */
/*   Updated: 2018/05/24 13:23:18 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_uchar *mem1;
	t_uchar *mem2;

	if (!n)
		return (0);
	mem1 = (t_uchar*)s1;
	mem2 = (t_uchar*)s2;
	while (*mem1 == *mem2)
	{
		if (!--n)
			return (0);
		mem1++;
		mem2++;
	}
	return (*mem1 - *mem2);
}
