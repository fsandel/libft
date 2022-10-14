/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <florian@sandel.email>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:59:59 by fsandel           #+#    #+#             */
/*   Updated: 2022/08/16 13:59:59 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*cstr;

	cstr = (char *)str;
	i = 0;
	while (i < n)
	{
		cstr[i] = c;
		i++;
	}
	return (cstr);
}
