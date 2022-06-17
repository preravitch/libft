/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psiripan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:38:37 by psiripan          #+#    #+#             */
/*   Updated: 2022/06/05 15:37:26 by psiripan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcc;
	char	*dstc;

	srcc = (char *)src;
	dstc = (char *)dst;
	if (srcc < dstc)
	{
		while (len--)
			*(dstc + len) = *(srcc + len);
		return (dst);
	}
	while (len--)
		*dstc++ = *srcc++;
	return (dst);
}
