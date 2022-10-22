/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <florian@sandel.email>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 22:56:15 by fsandel           #+#    #+#             */
/*   Updated: 2022/08/15 22:56:15 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if arg is part of basic ascii table
int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	else
		return (0);
}
