/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:12:39 by fsandel           #+#    #+#             */
/*   Updated: 2022/10/22 10:54:59 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//iterates through a string and applies f on each character
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
