/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:09:07 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/21 20:15:04 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		space(int n);
static char		*edge_case(int n, char *word);

char	*ft_itoa(int n)
{
	int		length;
	char	*word;
	int		i;

	length = space(n);
	word = ft_calloc(length + 1, 1);
	if (n == -2147483648 || n == 0)
	{
		word = edge_case(n, word);
		return (word);
	}
	if (n < 0)
	{
		n = (-1) * n;
		word[0] = '-';
	}
	i = 0;
	while (n > 0)
	{
		word[length - 1] = (n % 10) + '0';
		n = n / 10;
		length--;
	}		
	return (word);
}

static int	space(int n)
{
	int	length;

	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	length = 0;
	if (n < 0)
	{
		length++;
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static char	*edge_case(int n, char *word)
{
	if (n == -2147483648)
	{
		ft_memcpy(word, "-2147483648", 11);
		return (word);
	}
	if (n == 0)
	{
		word[0] = '0';
		return (word);
	}
	return (word);
}
