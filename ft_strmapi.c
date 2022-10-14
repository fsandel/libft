/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:31:47 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/13 13:33:02 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*out;
	int		i;

	len = 1;
	while (s[len])
		len++;
	out = malloc(len);
	i = 0;
	while (s[i])
	{
		out[i] = (*f)(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
