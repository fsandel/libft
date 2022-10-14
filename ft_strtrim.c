/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:14:22 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/13 16:15:16 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		trim;

	i = 0;
	trim = 0;
	trimmed = malloc((i + trim + 1) * sizeof(char));
	while (s1[trim] && (s1[trim] == *set))
		trim++;
	while ((s1[i + trim]) && (s1[i + trim] != *set))
	{
		trimmed[i] = s1[i + trim];
		i++;
	}
	trimmed[i + trim] = '\0';
	return (trimmed);
}
