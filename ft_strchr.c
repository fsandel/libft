/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:39:24 by florian           #+#    #+#             */
/*   Updated: 2022/10/21 19:44:51 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	int				length;
	unsigned char	chr;
	char			*strr;

	strr = (char *)str;
	chr = (unsigned char)c;
	length = ft_strlen(strr);
	while (*strr != chr)
	{
		if ((length) == 0)
			return (NULL);
		strr++;
		length--;
	}
	return (strr);
}
