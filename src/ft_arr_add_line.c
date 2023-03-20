/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_add_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:06:04 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/20 11:12:26 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_arr_add_line(char **arr, char *line)
{
	int		i;
	char	**ret;

	if (!line)
		return (NULL);
	if (!arr)
	{
		arr = ft_calloc(2, sizeof(char *));
		arr[0] = ft_strdup(line);
		arr[1] = NULL;
		return (arr);
	}
	ret = ft_calloc(ft_arr_size(arr) + 2, sizeof(char *));
	i = 0;
	while (arr[i])
	{
		ret[i] = ft_strdup(arr[i]);
		i++;
	}
	ret[i++] = ft_strdup(line);
	ret[i] = NULL;
	ft_arr_free(arr);
	arr = ret;
	return (ret);
}
