/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:13:39 by florian           #+#    #+#             */
/*   Updated: 2022/10/22 11:27:29 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//duplicates s and returns it
char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	str = malloc(ft_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
