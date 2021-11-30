/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:01:13 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/30 16:16:13 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*m;

	if (!lst || !f || !del)
		return (NULL);
	m = NULL;
	while (lst)
	{
		ft_lstadd_back(&m, ft_lstnew((*f)(lst -> content)));
		lst = lst -> next;
	}
	return (m);
}
