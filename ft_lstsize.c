/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:28:22 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/16 13:06:07 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list		*pt;
	int			len;

	len = 0;
	pt = lst;
	while (pt != NULL)
	{
		pt = pt->next;
		len++;
	}
	return (len);
}
