/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:30:11 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/23 15:16:39 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	char	*s;

	s = (char *)str;
	if ((char) c == '\0')
		return (ft_strchr(str, '\0'));
	while (ft_strchr(s, (char) c) != NULL)
	{
		ptr = ft_strchr(s, (char) c);
		s = ptr + 1;
	}
	return ((char *) ptr);
}
