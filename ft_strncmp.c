/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:51:49 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/09 13:07:31 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	counter;
	int				ascii;

	ascii = 0;
	counter = 0;
	if (n > 0)
	{
		n--;
		while (counter < n && (s1[counter] == s2[counter]))
		{
			if (s1[counter] == '\0' && s2[counter] == '\0')
				break ;
			counter++;
		}
		ascii = s1[counter] - s2[counter];
	}
	if (s1[counter] < 0 || s2[counter] < 0)
		return (ascii * -1);
	else
		return (ascii);
}
