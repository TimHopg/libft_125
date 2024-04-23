/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:47:42 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 17:41:05 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Writes char c to given file descriptor.

*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
