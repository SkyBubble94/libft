/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:39:28 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/30 12:33:14 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*alloc;

	alloc = malloc(count * size);
	if (!alloc || !count || !size)
		return (NULL);
	ft_bzero(alloc, count * size);
	return (alloc);
}
