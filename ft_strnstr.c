/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:22:06 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/26 15:32:35 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t n)
{
	char	*start;
	char	*j;

	if (*needle == '\0' || !needle)
		return ((char *) haystack);
	while (*haystack && n)
	{
		start = (char *) haystack;
		j = (char *) needle;
		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
		{
			return (start);
		}
		haystack = start + 1;
		n--;
	}
	return (NULL);
}
