/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:09:23 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/14 15:41:43 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%d %d\n", ('t' + 256 == 't'), ('t') == 't');

	
	return (0);
}



/*
char s[] = "tripouille";
	check(ft_strchr(s, 't') == s); showLeaks();
 check(ft_strchr(s, 'l') == s + 7); showLeaks();
	 check(ft_strchr(s, 'z') == 0); showLeaks();
	check(ft_strchr(s, 0) == s + strlen(s)); showLeaks();
	 check(ft_strchr(s, 't' + 256) == s); showLeaks();
*/
