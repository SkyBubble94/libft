/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:04:01 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/26 14:24:59 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*s3;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	s3 = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!s3 || !s1 || !s2)
		return (NULL);
	ft_strlcpy(s3, s1, lens1 + 1);
	ft_strlcat(s3, s2, lens1 + lens2 + 2);
	s3[lens1 + lens2] = '\0';
	return (s3);
}
