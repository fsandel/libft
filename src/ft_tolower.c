/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:35:18 by florian           #+#    #+#             */
/*   Updated: 2022/11/08 11:55:13 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//turns capital letter into small letter
int	ft_tolower(int chr)
{
	if (chr >= 'A' && chr <= 'Z')
		chr += 'a' - 'A';
	return (chr);
}
