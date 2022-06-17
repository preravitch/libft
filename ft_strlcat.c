/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 00:57:54 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/06 01:08:03 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *restrict dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*srcp;

	srcp = (char *)src;
	i = 0;
	while (i < dstsize && *dst)
	{
		dst++;
		i++;
	}
	if (i == dstsize)
		return (i + ft_strlen(src));
	j = 0;
	while (srcp[j])
	{
		if (j < dstsize - i - 1)
			*dst++ = srcp[j];
		j++;
	}
	*dst = 0;
	return (i + j);
}
