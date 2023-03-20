/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:48:21 by fsandel           #+#    #+#             */
/*   Updated: 2023/03/20 11:12:26 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_itobase(int n, char *base, int len)
{
	char			*output;
	int				base_len;
	int				sign;

	output = (char *)ft_calloc(len + 1, sizeof(char));
	ft_memset(output, base[0], len);
	base_len = ft_strlen(base);
	sign = 1;
	if (n < 0)
	{
		n *= -1;
		sign = -1;
	}
	while (len)
	{
		output[--len] = base[n % base_len];
		n = n / base_len;
	}
	if (sign == -1)
		output[len] = '-';
	return (output);
}
