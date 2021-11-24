/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:55:03 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/24 16:05:05 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_numbers(int n)
{
	int	i;

	i = 0;
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	ft_strrev(char *str)
{
	size_t	i;
	size_t	len;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	int		s;

	if (n < 0)
	{
		str = malloc((ft_count_numbers(-n) + 2) * sizeof(char *));
		s = -1;
		n = -n;
	}
	else
		str = malloc((ft_count_numbers(n) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (s < 0)
		str[i] = '-';
	ft_strrev(str);
	str[ft_strlen(str)] = '\0';
	return (str);
}
