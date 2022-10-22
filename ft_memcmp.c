/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:50:19 by florian           #+#    #+#             */
/*   Updated: 2022/10/22 11:14:31 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compares the first n entrys of two pointers
//returns the first found difference
int	ft_memcmp(void *str1, void *str2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = str1;
	p2 = str2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
