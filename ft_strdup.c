/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 02:50:34 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/08 19:10:28 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	size_t	len;

	len = ft_strlen(s1) + 1;
	a = malloc(sizeof (char) * len);
	if (!a)
		return (0);
	a = ft_memcpy(a, s1, len);
	return (a);
}
