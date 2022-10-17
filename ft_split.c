/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:15:05 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/17 17:08:57 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_splits(char const *s, char c);
static int	ft_word_len(char const *s, char c, int w);
static int	ft_only_sep(char const *s, char c);
static char	**ft_fill_array(char **array, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (s == 0 || s == NULL )
	{
		array = ft_calloc(1, sizeof(char *));
		array[0] = 0;
		return (0);
	}
	if (ft_only_sep(s, c))
	{
		array = ft_calloc(1, sizeof(char *));
		array[0] = NULL;
		return (array);
	}
	array = (char **)ft_calloc(count_splits(s, c) + 2, sizeof(char *));
	array = ft_fill_array(array, s, c);
	return (array);
}

static char	**ft_fill_array(char **array, char const *s, char c)
{
	char	*word;
	int		w;
	int		i;
	int		j;
	int		word_len;

	w = 0;
	j = 0;
	i = 0;
	while (s[w] && j < count_splits(s, c) + 1)
	{
		while (s[w] == c)
			w++;
		word_len = ft_word_len(s, c, w);
		word = ft_calloc(word_len + 1, 1);
		i = 0;
		while (s[w] && s[w] != c)
			word[i++] = s[w++];
		array[j] = word;
		j++;
	}
	array[j] = 0;
	return (array);
}

static int	count_splits(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (c == 0)
		return (0);
	while (s[i] == c)
	{
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count ++;
		i++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c, int w)
{
	int	word_len;

	word_len = 0;
	while (s[w + word_len] && s[w + word_len] != c)
		word_len++;
	return (word_len);
}

static int	ft_only_sep(char const *s, char c)
{
	int	w;

	w = 0;
	while (s[w] == c)
	{
		if (s[w + 1] == '\0')
			return (1);
		w++;
	}
	return (0);
}
