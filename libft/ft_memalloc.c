/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 15:59:57 by WSeegers          #+#    #+#             */
/*   Updated: 2018/04/29 21:37:44 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;
	
	if (!(ptr = malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
		((t_uchar*)ptr)[i++] = 0;
	return (ptr);
}
