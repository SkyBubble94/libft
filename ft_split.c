/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:23:23 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/25 16:49:32 by bbordere         ###   ########.fr       */
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
		word++;
		while (str[i] != sep && str[i])
			i++;
	}
	if (str[i - 1] == sep)
		word--;
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
	size_t	p;
	int		i;

	i = 0;
	p = 0;
	res = malloc((ft_words_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < ft_words_count(s, c))
	{
		while (s[p] == c && s[p])
			p++;
		res[i] = malloc((ft_word_len(s, c, p) + 1) * sizeof(char *));
		if (!res[i])
			return (NULL);
		res[i] = ft_substr(s, p, ft_word_len(s, c, p));
		i++;
		p += ft_word_len(s, c, p);
	}
	res[i] = NULL;
	return (res);
}
