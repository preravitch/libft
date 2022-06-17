/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:10:53 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/11 20:56:28 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	sub = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!sub)
		return (0);
	while (i < len)
	{
		sub[i] = *(s + start + i);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
