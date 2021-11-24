/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:39:28 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/23 16:54:14 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*alloc;
	size_t		i;

	i = 0;
	alloc = malloc(count * size);
	if (!alloc)
		return (NULL);
	while (i < count)
	{
		((char *) alloc)[i] = 0;
		i++;
	}
	return (alloc);
}
