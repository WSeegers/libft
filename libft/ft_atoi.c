/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 20:54:25 by WSeegers          #+#    #+#             */
/*   Updated: 2018/04/15 11:26:29 by WSeegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int i;
	int total;
	int pos;

	i = -1;
	total = 0;
	pos = 1;
	if (*nptr == '-')
	{
		pos = -1;
		i++;
	}
	while (nptr[++i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			break;
		total *= 10;
		total += nptr[i] - '0';
	}
	total *= pos;
	return (total);
}
