/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:39:28 by bbordere          #+#    #+#             */
/*   Updated: 2021/12/02 10:48:24 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*alloc;

	alloc = malloc(count * size);
	if (!alloc)
		return (NULL);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ft_bzero(alloc, count * size);
	return (alloc);
}
