/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:47:54 by florian           #+#    #+#             */
/*   Updated: 2022/10/14 14:22:05 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if ((nitems < 1) | (size < 1) | SIZE_MAX/size < nitems)
		return (NULL);
	ptr = malloc(nitems * size);
	ptr = ft_bzero(ptr, nitems * size);
	return (ptr);
}
