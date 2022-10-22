/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <florian@sandel.email>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:37:17 by fsandel           #+#    #+#             */
/*   Updated: 2022/08/16 14:37:17 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies from pointer src to the beginning of dest
//overwriting and doesnt check for overlapping, up to n entries
void	*ft_memcpy(char *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cdest;
	char const	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}
