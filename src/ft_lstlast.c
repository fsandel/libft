/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:25:24 by fsandel           #+#    #+#             */
/*   Updated: 2022/11/08 11:53:18 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//returns a pointer to the last node of a list lst
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst ->next != NULL)
	{
		lst = lst ->next;
	}
	return (lst);
}
