/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:15:38 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/21 17:06:45 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*dest;
	size_t	counter;

	counter = 0;
	dest = (char *) b;
	while (counter < len)
	{
		dest[counter] = c;
		counter++;
	}
	return (b);
}
