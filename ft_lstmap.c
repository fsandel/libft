/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:05:46 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/21 21:46:46 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*out;
	t_list	*tail;

	if (!lst || !f || !del)
		return (NULL);
	out = NULL;
	new = ft_lstnew(f(lst->content));
	ft_lstadd_back(&out, new);
	tail = out;
	lst = lst ->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&out, del);
			return (NULL);
		}
		ft_lstadd_back(&tail, new);
		lst = lst ->next;
		tail = tail->next;
	}
	return (out);
}
