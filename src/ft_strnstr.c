/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:56:51 by florian           #+#    #+#             */
/*   Updated: 2023/03/20 11:12:26 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//searches for string small in string big and returns a pointer it
//checks up to size characters
char	*ft_strnstr(const char *big, const char *small, size_t size)
{
	size_t	j;
	size_t	i;

	if (big == NULL && size == 0)
		return (NULL);
	if (small[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < size)
	{
		j = 0;
		while (big[i + j] == small[j] && i + j < size)
		{
			j++;
			if (small[j] == '\0')
			{
				return ((char *)(big + i));
			}
		}
		i++;
	}
	return (0);
}
