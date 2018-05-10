/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers.mauws@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 21:41:05 by wseegers          #+#    #+#             */
/*   Updated: 2018/05/05 23:40:14 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int i = -164;
	char *str;
	int n = 0;

	str = ft_itoa(i);
	ft_putstr(str);
	ft_putstr("\n");
	printf("%d\n", ft_atoi(str));

	ft_strdel(&str);
}
