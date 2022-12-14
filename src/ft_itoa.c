/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:09:07 by fsandel           #+#    #+#             */
/*   Updated: 2022/12/14 20:00:01 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//calculates the needed amount of space for the number
static int		ft_space(int n);
//cares about edge case 0 and INT_MIN
static char		*ft_edge_case(int n, char *word);

//takes an integer and returns it as a character
char	*ft_itoa(int n)
{
	int		length;
	char	*word;

	length = ft_space(n);
	word = ft_calloc(length + 1, 1);
	if (!word)
		return (NULL);
	if (n == -2147483648 || n == 0)
		return (ft_edge_case(n, word));
	if (n < 0)
	{
		n = (-1) * n;
		word[0] = '-';
	}
	while (n > 0)
	{
		word[length - 1] = (n % 10) + '0';
		n = n / 10;
		length--;
	}		
	return (word);
}

static int	ft_space(int n)
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

static char	*ft_edge_case(int n, char *word)
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
