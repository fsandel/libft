/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:47:09 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/19 15:49:40 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{

	if (*lst == NULL)
	{
		*lst = new;
		new ->next = NULL;
	}
	
	ft_lstlast(*lst) ->next = new;
	new ->next = NULL;
}
