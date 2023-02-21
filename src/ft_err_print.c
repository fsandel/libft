/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:02:49 by fsandel           #+#    #+#             */
/*   Updated: 2023/02/21 17:58:58 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_err_print(char *str, char *s1, char *s2, char *s3)
{
	int			i;
	int			j;
	char const	*s[3] = {s1, s2, s3};

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '%' && !str[i + 1])
			return ;
		if (str[i] == '%' && str[i + 1] == 's' && s[j])
		{
			ft_putstr_fd((char *)s[j++], 2);
			i++;
		}
		else
			ft_putchar_fd(str[i], 2);
		i++;
	}
}
