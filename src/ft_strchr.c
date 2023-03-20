/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:39:24 by florian           #+#    #+#             */
/*   Updated: 2023/03/20 11:12:26 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//search for c in str and returns pointer to it
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
