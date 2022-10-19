/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:46:39 by florian           #+#    #+#             */
/*   Updated: 2022/10/19 12:42:24 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			i;
	unsigned char	*sstr1;
	unsigned char	*sstr2;

	sstr1 = (unsigned char *)str1;
	sstr2 = (unsigned char *)str2;
	if (num == 0)
		return (0);
	i = 0;
	while (sstr1[i] == sstr2[i])
	{
		if (i == num - 1)
			return (0);
		i++;
	}
	return (sstr1[i] - sstr2[i]);
}
