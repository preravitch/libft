/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:16:41 by psiripan          #+#    #+#             */
/*   Updated: 2022/07/12 22:24:37 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *c)
{
	t_list	*s;

	s = (t_list *)malloc(sizeof(t_list));
	if (!s)
		return (NULL);
	s->content = c;
	s->next = NULL;
	return (s);
}
