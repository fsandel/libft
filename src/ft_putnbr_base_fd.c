/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:02:03 by fsandel           #+#    #+#             */
/*   Updated: 2022/11/08 11:54:13 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr_base_fd(int n, char const *base, int fd)
{
	long		num;
	int			len;
	static int	count = 0;

	num = (long)n;
	len = (int)ft_strlen(base);
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
		count++;
	}
	if (num >= len)
	{
		ft_putnbr_base_fd(num / len, base, fd);
		ft_putnbr_base_fd(num % len, base, fd);
	}
	if (num < len)
	{
		count += 1;
		ft_putchar_fd(base[num], fd);
	}
	return (count);
}
