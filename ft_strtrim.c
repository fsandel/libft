/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:14:22 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/21 19:46:06 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		left;
	int		right;

	right = ft_strlen(s1);
	i = 0;
	left = 0;
	trimmed = ft_calloc(right + 1, 1);
	while (s1[left] && ft_strchr(set, s1[left]))
		left++;
	while (s1[right - 1] && ft_strchr(set, s1[right - 1]) && right > left)
		right--;
	while (left < right)
	{
		trimmed[i] = s1[left];
		i++;
		left++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
