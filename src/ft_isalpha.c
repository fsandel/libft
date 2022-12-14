/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <florian@sandel.email>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:51:20 by fsandel           #+#    #+#             */
/*   Updated: 2022/08/15 21:51:20 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//checks if argument is letter
int	ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
		return (1);
	else
		return (0);
}
