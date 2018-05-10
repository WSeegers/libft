/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getzerobyte_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers.mauws@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 00:54:28 by wseegers          #+#    #+#             */
/*   Updated: 2018/05/06 01:52:50 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	t_ulong mem = 0x1122334455667788;
	printf("%d\n", ft_getzerobyte(mem));

	mem = (mem - 0x0101010101010101) & ~mem & 0x8080808080808080;
	printf("%016lx : 0\n", mem >> (8 * 7));
	printf("%016lx : 1\n", mem >> (8 * 6));
	printf("%016lx : 2\n", mem >> (8 * 5));
	printf("%016lx : 3\n", mem >> (8 * 4));
	printf("%016lx : 4\n", mem >> (8 * 3));
	printf("%016lx : 5\n", mem >> (8 * 2));
	printf("%016lx : 6\n", mem >> (8 * 1));
	printf("%016lx : 7\n", mem);

}

