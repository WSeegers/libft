/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 20:54:25 by WSeegers          #+#    #+#             */
/*   Updated: 2018/04/25 21:11:31 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	long int ret;
	char **endptr;

	endptr = ft_memalloc(sizeof(endptr));
	ret = ft_strtol(nptr, endptr, 10);
	if (ret == LONG_MAX)
		return (-1);
	if (ret == LONG_MIN)
		return (0);
	return ((int)ret);
}
