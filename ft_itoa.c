/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 20:19:21 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/13 20:52:01 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_put(char *x, unsigned int number, int len)
{
	while (number > 0)
	{
		x[len] = 48 + (number % 10);
		number = number / 10;
		len--;
	}
	return (x);
}

static int	digit(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*a;
	size_t			len;
	unsigned int	num;
	int				neg;

	len = digit(n);
	neg = 1;
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	a[len--] = '\0';
	if (n == 0)
		a[0] = '0';
	if (n < 0)
	{
		neg *= -1;
		num = n * -1;
		a[0] = '-';
	}
	else
		num = n;
	a = ft_put(a, num, len);
	return (a);
}
