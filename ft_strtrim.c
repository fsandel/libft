/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:14:22 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/17 17:09:54 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		trim;

	i = 0;
	trim = 0;
	trimmed = malloc((i + 1));
	while (s1[trim] && ft_strchr(set, s1[trim]))
		trim++;
	while ((s1[i + trim]) && !ft_strchr(set, s1[i + trim]))
	{
		trimmed[i] = s1[i + trim];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
