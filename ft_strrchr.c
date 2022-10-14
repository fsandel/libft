/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:26:21 by florian           #+#    #+#             */
/*   Updated: 2022/10/14 15:49:55 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char const	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	chr;

	chr = (unsigned char)c;
	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	while (i >= 0 && *str != chr)
	{
		str--;
		i--;
	}
	if (i < 0)
		return (0);
	return (str);
}
