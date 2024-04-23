/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:57:55 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 12:04:29 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Returns size_t length of string excl. '\0'

*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
