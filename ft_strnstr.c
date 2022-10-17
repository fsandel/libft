/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:56:51 by florian           #+#    #+#             */
/*   Updated: 2022/10/15 12:00:48 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

const char	*ft_strnstr(const char *big, const char *small, size_t size)
{
	size_t	j;
	size_t	i;

	if (small[0] == '\0')
		return (big);
	i = 0;
	while (big[i] && i < size)
	{
		j = 0;
		while (big[i + j] == small[j] && i + j < size)
		{
			j++;
			if (small[j] == '\0')
			{
				return (big + i);
			}
		}
		i++;
	}
	return (0);
}
