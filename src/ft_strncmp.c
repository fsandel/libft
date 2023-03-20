/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:46:39 by florian           #+#    #+#             */
/*   Updated: 2023/03/20 11:12:26 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//compares two strings, up to num characters and returns the difference
int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			i;

	if (num == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i])
	{
		if (i + 1 == num)
			return (0);
		if (str1[i] == 0 || str2[i] == 0)
			break ;
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
