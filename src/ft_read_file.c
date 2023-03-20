/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:06:14 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/20 11:12:26 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_read_file(int fd)
{
	char	buf[1];
	char	**ret;
	char	*line;
	int		bytes_read;

	if (fd < 0)
		return (NULL);
	if (read(fd, buf, 0) < 0)
		return (NULL);
	bytes_read = 1;
	line = NULL;
	while (bytes_read == 1)
	{
		bytes_read = read(fd, buf, 1);
		if (bytes_read != 1)
			break ;
		line = ft_str_append_chr(line, buf[0]);
	}
	ret = ft_split(line, '\n');
	free(line);
	return (ret);
}
