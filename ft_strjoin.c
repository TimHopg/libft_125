/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:28:08 by thopgood          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/05/05 13:18:46 by thopgood         ###   ########.fr       */
=======
/*   Updated: 2024/05/07 22:54:20 by thopgood         ###   ########.fr       */
>>>>>>> 83d5e04b4fa8a07cab5627fa2d53edf2d0375fd1
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
<<<<<<< HEAD
 *Allocates with malloc and returns new string, s1 + s2.
=======
 * Allocates with malloc and returns new string, s1 + s2.
>>>>>>> 83d5e04b4fa8a07cab5627fa2d53edf2d0375fd1
 * Returns ptr to new string or NULL if fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	j = 0;
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
