/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:09:31 by florian           #+#    #+#             */
/*   Updated: 2022/10/14 11:44:09 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	*chr;

	chr = NULL;
	p = (unsigned char *)s;
	i = 0;
	while (s && i < n)
	{
		if (*p != (unsigned char)c)
			p++;
		else
		{
			chr = p;
			break ;
		}
		i++;
	}
	return (chr);
}
