/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:44:14 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/11 13:11:24 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char const *string);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	joined = malloc((len(s1) + len(s2) + 1) * sizeof(char));
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

int	len(char const *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}
