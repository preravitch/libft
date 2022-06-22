/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:22:23 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/19 16:22:23 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wordcount(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

static char	*copyword(const char *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	row;
	size_t	index;

	row = 0;
	index = 0;
	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (row < wordcount(s, c) && s[index])
	{
		if (s[index] != c)
		{
			ptr[row++] = copyword(&s[index], c);
			while (s[index] != c && s[index])
				index++;
		}
		else if (s[index] == c)
			index++;
	}
	ptr[row] = 0;
	return (ptr);
}
