/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:39:24 by florian           #+#    #+#             */
/*   Updated: 2022/10/14 15:45:31 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int				length;
	unsigned char	chr;

	chr = (unsigned char)c;
	length = ft_strlen(str);
	while (*str != chr)
	{
		if ((length) == 0)
			return (NULL);
		str++;
		length--;
	}
	return (str);
}
