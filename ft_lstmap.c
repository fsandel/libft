/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:05:46 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/21 19:04:42 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*out;
	t_list	*tail;

	if(!lst || !f || !del)
		return (NULL);
	out = NULL;
	if(!(new = ft_lstnew(f(lst->content))))
		return (NULL);
	ft_lstadd_back(&out, new);
	tail = out;
	lst = lst ->next;
	while (lst)
	{
		if(!(new = ft_lstnew(f(lst->content))))
		{
			//ft_lstclear(&out, del);
			return (NULL);
		}
		//new = ft_lstnew(f(lst->content));
		//ft_lstclear(&out, del);
		ft_lstadd_back(&tail, new);
		lst = lst ->next;
		tail = tail->next;
	}
	return (out);
}
