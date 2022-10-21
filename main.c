/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:17:31 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/19 15:47:15 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_print_list(t_list *lst);

int	main(void)
{
	t_list	*liste;
	char *s1 = "1";
	char *s2 = "2";
	char *s3 = "4";
	char *s4 = "j";
	liste = ft_lstnew(s1);
	ft_lstadd_front(&liste, ft_lstnew(s2));
	ft_lstadd_back(&liste, ft_lstnew(s3));
	ft_lstadd_back(&liste, ft_lstnew(s4));
	//ft_print_list(liste);
	
	return (0);
}

void	ft_print_list(t_list *lst)
{
	t_list	*head;

	head = lst;
	while (lst != NULL)
	{
		printf("%s\n", lst ->content);
		lst = lst ->next;
	}
}
