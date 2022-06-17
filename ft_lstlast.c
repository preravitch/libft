/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:31:56 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/15 21:42:07 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pt;

	if (!lst)
		return (NULL);
	pt = lst;
	while (pt->next != NULL)
	{
		pt = pt->next;
	}
	return (pt);
}
