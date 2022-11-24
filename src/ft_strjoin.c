/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:44:14 by fsandel           #+#    #+#             */
/*   Updated: 2022/11/08 11:54:38 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//adds string second at the end of string first and returns it
char	*ft_strjoin(char const *first, char const *second)
{
	char	*joined;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	joined = ft_calloc((ft_strlen(first) + ft_strlen(second) + 1), 1);
	if (!joined)
		return (NULL);
	while (first[i1])
	{
		joined[i1] = first[i1];
		i1++;
	}
	while (second[i2])
	{
		joined[i1 + i2] = second[i2];
		i2++;
	}
	joined[i1 + i2] = '\0';
	return (joined);
}
