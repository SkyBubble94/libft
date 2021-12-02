/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:23:23 by bbordere          #+#    #+#             */
/*   Updated: 2021/12/01 11:44:12 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_count(char const *str, char sep)
{
	size_t	i;
	int		word;

	i = 0;
	word = 0;
	while (str[i])
	{		
		while (str[i] == sep && str[i])
			i++;
		if (str[i] != sep && str[i])
			word++;
		while (str[i] != sep && str[i])
			i++;
	}
	return (word);
}

static int	ft_word_len(char const *str, char sep, size_t index)
{
	size_t	i;

	i = 0;
	while (str[index + i] && str[index + i] != sep)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i2;
	int		i;

	i = 0;
	i2 = 0;
	res = malloc((ft_words_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < ft_words_count(s, c))
	{
		while (s[i2] && s[i2] == c)
			i2++;
		res[i] = ft_substr(s, i2, ft_word_len(s, c, i2));
		i++;
		i2 += ft_word_len(s, c, i2);
	}
	res[i] = NULL;
	return (res);
}
