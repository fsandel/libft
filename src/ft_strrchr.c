/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:26:21 by florian           #+#    #+#             */
/*   Updated: 2022/11/08 11:55:02 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//searches character c in string str, starts from behind
char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	chr;
	char			*stri;

	stri = (char *)str;
	chr = (unsigned char)c;
	i = 0;
	while (stri[i])
		i++;
	while (i >= 0 && stri[i] != chr)
		i--;
	if (i == (-1))
		return (NULL);
	return (stri + i);
}
