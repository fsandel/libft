/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:53:06 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/14 16:09:09 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			length;

	length = ft_strlen(s);
	if (start > length || len == 0)
		return (NULL);
	if (length < len)
		sub = malloc((len + 1) * sizeof(char));
	else
		sub = malloc((length + 1) * sizeof(char));

	i = 0;
	while (i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	return (sub);
} 
