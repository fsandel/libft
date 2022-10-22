/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <florian@sandel.email>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 23:04:05 by fsandel           #+#    #+#             */
/*   Updated: 2022/08/15 23:04:05 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if argument is part of the printable ascii table
int	ft_isprint(int arg)
{
	if (arg >= 32 && arg < 127)
		return (16384);
	else
		return (0);
}
