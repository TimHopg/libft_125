/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:59:39 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 17:43:49 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Outputs string 's' to given file descriptor followed by a newline.

*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
