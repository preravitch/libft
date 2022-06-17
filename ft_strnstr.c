/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:00:00 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/11 20:34:25 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (i < len && *haystack)
	{
		if (*haystack == *needle)
		{
			j = 1;
			while (needle[j] == haystack[j] && needle[j] && i + j < len)
				j++;
			if (!needle[j])
				return ((char *)(haystack));
		}
		i++;
		haystack++;
	}
	return (NULL);
}
