/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:08:36 by fsandel           #+#    #+#             */
/*   Updated: 2022/11/22 18:51:09 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_get_line(char *leftover);
static char	*ft_store_leftovers(char *leftover);
static char	*ft_read_line(int fd, char *leftover);
static char	*ft_join_free(char *first, char *second);

/*
* Reads a line in a given file and returns the line.
* Every call of the function returns a new line, if it exists.
* Buffer size is set to 42 and max amount of file descriptors to 10240
* @param fd The file descriptor to read from
* @return line of the given file
*/
char	*get_next_line(int fd)
{
	char		*line;
	static char	*leftover[MAX_FD];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > MAX_FD)
		return (0);
	leftover[fd] = ft_read_line(fd, leftover[fd]);
	if (!leftover[fd])
		return (NULL);
	line = ft_get_line(leftover[fd]);
	leftover[fd] = ft_store_leftovers(leftover[fd]);
	return (line);
}

/*
* Cuts first part of a Line until newline (if it exists)
* @param uncut Line
* @return Line ready for output, including newline if included in file
*/
static char	*ft_get_line(char *uncut)
{
	int		len;
	char	*output;

	len = 0;
	if (!uncut[0])
		return (NULL);
	while (uncut[len] && uncut[len] != '\n')
		len++;
	output = (char *)ft_calloc(len + 2, sizeof(char));
	if (!output)
		return (NULL);
	ft_memcpy(output, uncut, len + 1);
	return (output);
}

/*
* Takes the full joined string and splits it at newline (if it exists),
* returns everything after the newline and frees the full string
* @param full_str The full string, including old leftovers line,
* newline and new leftovers
* @return leftovers
*/
static char	*ft_store_leftovers(char *full_str)
{
	int		i;
	char	*leftover;
	int		len;

	i = 0;
	while (full_str[i] && full_str[i] != '\n')
		i++;
	if (!full_str[i])
		return (free(full_str), NULL);
	len = ft_strlen(full_str);
	leftover = (char *)ft_calloc(len - i + 1, sizeof(char));
	if (!leftover)
		return (NULL);
	i = i + 1;
	ft_memcpy(leftover, &full_str[i], len - i);
	free(full_str);
	return (leftover);
}

/*
* Reads until newline is found or no byte is read
* Connects with previous leftovers
* @param fd FileDescriptor
* @param leftover leftovers from previous function call
* @return joined string of leftovers and repeated reading
*/
static char	*ft_read_line(int fd, char *leftover)
{
	char	*buffer;
	int		bytes_read;
	char	*trigger;

	buffer = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	trigger = NULL;
	while (!trigger && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(buffer), free(leftover), NULL);
		buffer[bytes_read] = 0;
		leftover = ft_join_free(leftover, buffer);
		if (leftover)
			trigger = ft_strchr(leftover, '\n');
		else
			trigger = NULL;
	}
	free(buffer);
	return (leftover);
}

/*
* Joins 2 strings and returns them, protected for NULL in first parameter
* @param first first part of the joined string, protected for non existance,
* gets freed afterwards
* @param second second part of the joined string
* @return joined string
*/

static char	*ft_join_free(char *first, char *second)
{
	char	*output;

	if (!first)
	{
		first = (char *)ft_calloc(1, sizeof(char));
		if (!first)
			return (NULL);
	}
	output = ft_strjoin(first, second);
	free(first);
	return (output);
}
