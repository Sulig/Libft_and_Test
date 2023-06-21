/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:28:52 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/12 16:52:15 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	cpy = malloc(len + 1);
	if (cpy == 0)
		return (0);
	len = 0;
	while (s1[len])
	{
		cpy[len] = s1[len];
		len++;
	}
	cpy[len] = '\0';
	return (cpy);
}
