/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:09:54 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/26 10:37:16 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*dest;
	size_t			i;

	if (!dst || !src)
		return (NULL);
	s = (unsigned char *) src;
	dest = (unsigned char *) dst;
	i = 0;
	if (dest < s)
	{
		while (i < n)
		{
			dest[i] = s[i];
			i++;
		}		
	}
	else
		ft_memcpy(dest, s, n);
	return (dest);
}
