/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:25:56 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/20 17:49:31 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void				*p;
	size_t				total;

	total = count * size;
	if (count > __INT_MAX__ || size > __INT_MAX__)
		return (NULL);
	p = (void *)malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}
