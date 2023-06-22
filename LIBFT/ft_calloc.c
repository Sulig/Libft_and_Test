/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:30:06 by sadoming          #+#    #+#             */
/*   Updated: 2023/05/24 19:54:20 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_bezero(void *s, size_t n)
{
	size_t	cnt;
	char	*dest;

	dest = (char *) s;
	cnt = 0;
	while (cnt < n)
	{
		dest[cnt] = '\0';
		cnt++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*call;
	int		cnt;

	cnt = 0;
	if (count == 0 && size == 0)
	{
		count++;
		size++;
	}
	if (count == 0 || size == 0)
		return (0);
	call = malloc(count * size);
	if (call == 0)
		return (0);
	ft_bezero(call, count * size);
	return (call);
}
