/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:43:24 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/21 17:09:38 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	length;
	size_t	total;
	size_t	counter;

	counter = 0;
	length = ft_strlen(dest);
	total = ft_strlen((char *) src);
	if (dstsize == 0 || dstsize <= length)
		return (total + dstsize);
	dstsize--;
	total += length;
	while (length < dstsize && src[counter] != '\0')
	{
		dest[length] = src[counter];
		counter++;
		length++;
	}
	dest[length] = '\0';
	return (total);
}
