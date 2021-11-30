/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:02:02 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/30 11:12:09 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (!(*s1) && !(*s2))
			return (0);
		if (!(*s1))
			return (-1);
		if (!(*s2))
			return (1);
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
