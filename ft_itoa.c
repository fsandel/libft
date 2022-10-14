/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:09:07 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/12 11:51:41 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	ft_itoc(int n);
int		ft_len(int n);

char	*ft_itoa(int n)
{
	char	*word;
	int		length;
	int		i;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	length = ft_len(n);
	word = malloc((length + 1) * sizeof(char));
	if (n < 0)
	{
		n = (-1) * n;
		word[0] = '-';
	}
	i = 0;
	while (n >= 1)
	{
		word[length - i - 1] = (n % 10) + '0';
		n = n / 10;
		i++;
	}		
	word[length] = '\0';
	return (word);
}

int	ft_len(int n)
{
	int	length;

	length = 0;
	if (n < 0)
	{
		length++;
		n = n * (-1);
	}
	while (n >= 1)
	{
		n = n / 10;
		length++;
	}
	printf("length: %d\n", length);
	return (length);
}
