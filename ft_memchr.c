/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:41:46 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/06 15:44:41 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
