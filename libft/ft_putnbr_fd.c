/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers.mauws@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 00:07:21 by wseegers          #+#    #+#             */
/*   Updated: 2018/04/26 00:07:30 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == INT_MIN)
		ft_putstr_fd(INT_MIN_STR, fd);
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = - nbr;
	}
	if (nbr > 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
	else
		ft_putchar_fd((nbr % 10) + '0', fd);
}
