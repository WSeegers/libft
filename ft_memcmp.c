/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 13:53:34 by WSeegers          #+#    #+#             */
/*   Updated: 2018/04/23 14:40:54 by WSeegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_uchar *c1;
	t_uchar *c2;
	size_t i;

	c1 = (t_uchar*) s1;
	c2 = (t_uchar*) s2;
	i = 1;
	while (*c1 == *c2)
	{
		if (i++ == n)
			return (0);
		c1++;
		c2++;
	}
	return (*c1 - *c2);

}
