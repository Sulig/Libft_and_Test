/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:56:28 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/07 20:04:16 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	cnt;

	len = 0;
	cnt = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize == 0)
		return (len);
	if (len == 0)
	{
		dest[0] = '\0';
		return (len);
	}
	while (cnt < len && cnt < dstsize -1)
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	dest[cnt] = '\0';
	return (len);
}
