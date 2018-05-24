/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers.mauws@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 23:23:17 by wseegers          #+#    #+#             */
/*   Updated: 2018/05/23 23:46:45 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(t_ulong nbr, int fd)
{
	if (nbr >> 4)
		ft_puthex_fd(nbr >> 4, fd);
	ft_putchar_fd("0123456789abcdef"[nbr & 0xf], fd);
}
