/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_append_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:06:19 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/20 11:12:26 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_str_append_str(char *first, char *second)
{
	char	*ret;

	if (!second)
		return (first);
	if (!first)
		return (ft_strdup(second));
	ret = ft_calloc(ft_strlen(first) + ft_strlen(second) + 1, sizeof(char));
	ft_memmove(ret, first, ft_strlen(first));
	ft_memmove(&ret[ft_strlen(first)], second, ft_strlen(second));
	free(first);
	first = ret;
	return (ret);
}
