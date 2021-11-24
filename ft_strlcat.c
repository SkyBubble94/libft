/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:33:24 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/24 11:49:08 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	i;
	size_t	len_total;

	len_dest = ft_strlen(dst);
	i = 0;
	len_total = ft_strlen(src);
	if (size <= len_dest)
		len_total += size;
	else
		len_total += len_dest;
	while (src[i] && len_dest + 1 < size)
	{
		dst[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dst[len_dest] = '\0';
	return (len_total);
}
