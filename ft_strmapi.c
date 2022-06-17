/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:53:37 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/13 21:04:19 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*a;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	a = malloc(sizeof(char) * ft_strlen(s) + 1);
	while (i != ft_strlen(s))
	{
		a[i] = (*f)(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
