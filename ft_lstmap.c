/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:01:13 by bbordere          #+#    #+#             */
/*   Updated: 2021/11/29 15:44:39 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*m;
	t_list	*start;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	start = ft_lstnew(NULL);
	m = start;
	while (lst -> next)
	{
		m -> next = ft_lstnew((*f)(lst));
		m = m -> next;
		lst = lst -> next;
	}
	m = start -> next;
	ft_lstdelone(start, del);
	return (m);
}
