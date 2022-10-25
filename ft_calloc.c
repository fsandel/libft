/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:47:54 by florian           #+#    #+#             */
/*   Updated: 2022/10/25 16:26:59 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates a pointer and fills it with zeros
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (size && (SIZE_MAX / size < nitems))
		return (NULL);
	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
