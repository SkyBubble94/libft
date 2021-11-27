/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:30:11 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/26 15:31:56 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (char)c)
			ptr = (char *)str;
		str++;
	}
	if ((char)c == *str)
		return ((char *)str);
	return (ptr);
}
