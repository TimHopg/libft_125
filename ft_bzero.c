/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:52:57 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 12:34:45 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 

Places n zero-valued bytes to memory pointed to by s

*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = 0;
}
