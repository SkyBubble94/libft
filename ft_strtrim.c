/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:34:32 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/24 14:38:11 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isincharset(char c, const char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;

	str = malloc(ft_strlen(s1) + 1 * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (ft_isincharset(*s1, set))
		s1++;
	while (*s1)
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	str[i] = '\0';
	s1--;
	i--;
	while (ft_isincharset(*s1, set))
	{
		str[i] = '\0';
		i--;
		s1--;
	}
	return (str);
}
