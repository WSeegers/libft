/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers.mauws@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 21:52:12 by wseegers          #+#    #+#             */
/*   Updated: 2018/05/24 15:20:04 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lstcur;
	t_list *lstnext;

	if (!alst || !*alst)
		return ;
	lstcur = *alst;
	while (lstcur->next)
	{
		lstnext = lstcur->next;
		ft_lstdelone(&lstcur, del);
		lstcur = lstnext;
	}
	ft_lstdelone(&lstcur, del);
	*alst = NULL;
}
