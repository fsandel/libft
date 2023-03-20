/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:06:06 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/20 11:12:26 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_arr_dup(char **arr)
{
	char	**ret;
	int		i;

	if (!arr)
		return (NULL);
	ret = ft_calloc(ft_arr_size(arr) + 1, sizeof(char *));
	i = 0;
	while (ret && arr[i])
	{
		ret[i] = ft_strdup(arr[i]);
		i++;
	}
	return (ret);
}
