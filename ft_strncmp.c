/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:46:39 by florian           #+#    #+#             */
/*   Updated: 2022/10/17 17:09:38 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
	return (str1[i] - str2[i]);
}
