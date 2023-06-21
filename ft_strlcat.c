/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:43:24 by sadoming          #+#    #+#             */
/*   Updated: 2023/05/08 16:28:29 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter(char *src)
{
	size_t	counter;

	counter = 0;
	while (src[counter] != 0)
		counter++;
	return (counter);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	length;
	size_t	total;
	size_t	counter;

	counter = 0;
	length = ft_counter(dest);
	total = ft_counter((char *) src);
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
