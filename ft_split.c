/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:25:34 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/15 21:12:59 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *str, char c)
{
	int	i;
	int	new;

	i = 0;
	new = 0;
	while (*str)
	{
		if (*str != c && new == 0)
		{
			new = 1;
			i++;
		}
		else if (*str == c)
			new = 0;
		str++;
	}
	return (i);
}

static char	*getword(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 1));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**str;

	str = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!s || !str)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			str[j++] = getword(s, index, i);
			index = -1;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
