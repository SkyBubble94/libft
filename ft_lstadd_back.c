/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:14:33 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/30 16:29:06 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{	
	t_list	*p;

	if (!*alst)
		*alst = new;
	else
	{
		p = ft_lstlast(*alst);
		p -> next = new;
	}
}
