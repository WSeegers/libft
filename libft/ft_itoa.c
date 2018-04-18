/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 14:41:57 by WSeegers          #+#    #+#             */
/*   Updated: 2018/04/16 23:34:29 by WSeegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_itoa(int nbr)
{
	size_t	size;
	int		i;
	int		is_neg;
	char	*str;

	size = ft_intlen(nbr);
	is_neg = 0;
	if (nbr < 0)
	{
		is_neg = 1;
		nbr = -nbr;
		size++;
	}
	if (!(str = (char*)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	str[size--] = '\0';
	if (is_neg)
		str[0] = '-';
	i = size;
	while (i >= 0 + is_neg)
	{
		str[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}


