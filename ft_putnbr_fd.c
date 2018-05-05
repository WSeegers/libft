/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers.mauws@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 00:07:21 by wseegers          #+#    #+#             */
/*   Updated: 2018/05/02 12:30:58 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	t_uint unbr;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		unbr = -nbr;
	} else
		unbr = nbr;
	if (unbr > 10)
	{
		ft_putnbr_fd(unbr / 10, fd);
		ft_putchar_fd((unbr % 10) + '0', fd);
	}
	else
		ft_putchar_fd((unbr % 10) + '0', fd);
}
