/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <florian@sandel.email>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:27:43 by fsandel           #+#    #+#             */
/*   Updated: 2022/08/16 14:27:43 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//fills up to n chars in a string with '/0' char
void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
