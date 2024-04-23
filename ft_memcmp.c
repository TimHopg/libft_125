/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:50:03 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/10 14:06:15 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Compares two blocks of memory s1 and s2 up to n bytes.
Returns 0 if blocks are equal, a negative value if s1 < s2 and a positive
	value if s1 > s2.

*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
