/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:53:07 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/15 22:16:27 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pt;
	t_list	*tmp;

	pt = *lst;
	while (pt)
	{
		tmp = pt->next;
		ft_lstdelone(pt, del);
		pt = tmp;
	}
	*lst = NULL;
}
