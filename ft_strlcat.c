/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:41:34 by florian           #+#    #+#             */
/*   Updated: 2022/10/15 10:48:37 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < dest_len)
		return (src_len + size);
	if (size > (src_len + dest_len + 1))
		size = (src_len + dest_len + 1);
	i = 0;
	while (i + 1 + dest_len < size)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	return (dest_len + src_len);
}
