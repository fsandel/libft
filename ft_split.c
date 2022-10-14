/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:15:05 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/13 15:22:25 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		count_splits(char const *s, char c);
int		find_biggest(char const *s, char c);
char	**fill_array(char const *s, char c, char **array);

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**array;
	int		biggest;

	if (s == NULL)
		return (NULL);
	biggest = find_biggest(s, c);
	i = -1;
	array = malloc(count_splits(s, c) * sizeof(char *));
	while (i++ < count_splits(s, c))
		array[i] = malloc((biggest + 1) * sizeof(char));
	array = fill_array(s, c, array);
	return (array);
}

int	count_splits(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count ++;
		i++;
	}
	return (count);
}

char	**fill_array(char const *s, char c, char **array)
{
	int	i;
	int	pos;
	int	line;

	i = 0;
	pos = 0;
	line = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			array[line][pos] = '\0';
			line++;
			i++;
			pos = 0;
		}
		array[line][pos] = s[i];
		pos++;
		i++;
	}
	return (array);
}

int	find_biggest(char const *s, char c)
{
	int	biggest;
	int	temp;
	int	i;

	biggest = 0;
	temp = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (temp > biggest)
				biggest = temp;
			temp = 0;
			i++;
		}
		temp++;
		i++;
	}
	return (biggest);
}
