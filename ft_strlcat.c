/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:41:34 by florian           #+#    #+#             */
/*   Updated: 2022/09/20 16:58:06 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	size += 1;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size < i)
		return (j + size - 1);
	length = i + j;
	j = 0;
	while (src[j] && i < size - 2)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (length);
}
