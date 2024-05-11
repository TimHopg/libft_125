/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:55:45 by thopgood          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/05/05 13:13:10 by thopgood         ###   ########.fr       */
=======
/*   Updated: 2024/05/07 22:55:52 by thopgood         ###   ########.fr       */
>>>>>>> 83d5e04b4fa8a07cab5627fa2d53edf2d0375fd1
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * String duplication. Allocates memory using malloc for new string and copies
 	contents of original string incl. null termination.
*/

char	*ft_strdup(const char *s)
{
	char	*dup_s;
	size_t	i;

	dup_s = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup_s == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		dup_s[i] = s[i];
	dup_s[i] = '\0';
	return (dup_s);
}
