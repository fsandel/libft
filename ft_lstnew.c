/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:45:13 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/22 15:53:43 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates a new node with given content and returns it
t_list	*ft_lstnew(void *content)
{
	t_list	*line;

	line = ft_calloc(1, sizeof(t_list));
	if (!line)
		return (NULL);
	line ->content = content;
	line ->next = NULL;
	return (line);
}
