/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:44:14 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/21 19:45:22 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	while (s1[i1])
	{
		joined[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
	{
		joined[i1 + i2] = s2[i2];
		i2++;
	}
	joined[i1 + i2] = '\0';
	return (joined);
}
