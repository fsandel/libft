/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:46:39 by florian           #+#    #+#             */
/*   Updated: 2022/10/14 15:08:49 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	i;

	if (num == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i])
		{
			if (i == num - 1)
				return (0);
			i++;
		}
	//printf("%zu\n", i);
	//printf("%c\n", str1[i]);
	//printf("%c\n", str2[i]);
	return (str1[i] - str2[i]);
}
