/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsandel <fsandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:37:34 by fsandel           #+#    #+#             */
/*   Updated: 2022/11/08 11:54:19 by fsandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//writes string s to file descriptor fd
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
