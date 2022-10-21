/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <florian@sandel.email>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:51:25 by fsandel           #+#    #+#             */
/*   Updated: 2022/08/16 14:51:25 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if ((csrc < cdest) && (cdest < csrc + n))
	{
		while (n--)
		{
			cdest[n] = csrc[n];
		}
	}
	else
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dest);
}
