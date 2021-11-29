/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:16:14 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/29 12:14:58 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;
	int			j;

	i = 0;
	j = start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (i < len && s[j])
	{
		substr[i] = s[j];
		i++;
		j++;
	}
	while (i < len)
	{
		substr[i] = '\0';
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
