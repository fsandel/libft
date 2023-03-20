/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_append_chr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:06:16 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/20 11:12:26 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_str_append_chr(char *str, char chr)
{
	char	*ret;

	if (!chr)
		return (str);
	if (!str)
	{
		ret = ft_calloc(2, sizeof(char));
		ret[0] = chr;
		return (ret);
	}
	ret = ft_calloc(ft_strlen(str) + 2, sizeof(char));
	ft_memmove(ret, str, ft_strlen(str));
	ret[ft_strlen(str)] = chr;
	free(str);
	str = ret;
	return (ret);
}
