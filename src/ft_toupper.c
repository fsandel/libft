/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:23:05 by florian           #+#    #+#             */
/*   Updated: 2022/11/08 11:55:17 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//turns small letter into capital letter
int	ft_toupper(int chr)
{
	if (chr >= 'a' && chr <= 'z')
		chr += 'A' - 'a';
	return (chr);
}
