/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:53:06 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/22 15:51:31 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calculates the minimum space needed for ft_substr and returns it
static int	ft_calc_mem(char const *s, unsigned int start, size_t len);

//copies string s, starts at atart, up to len chars
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			length;

	i = 0;
	length = ft_strlen(s);
	if (start > length || len == 0)
		return (ft_calloc(1, 1));
	sub = ft_calloc(ft_calc_mem(s, start, len) + 1, 1);
	if (!sub)
		return (NULL);
	while (i < len && s[i])
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

static int	ft_calc_mem(char const *s, unsigned int start, size_t len)
{
	size_t	s_length;

	s_length = ft_strlen(s);
	if ((s_length - start + 2) > len)
		return (len);
	else
		return (s_length - start + 1);
}
