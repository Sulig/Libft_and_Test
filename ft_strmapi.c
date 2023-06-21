/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:17:14 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 17:53:55 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		cnt;
	char	*strf;

	strf = malloc(ft_strlen(s) + 1);
	if (strf == 0)
		return (0);
	cnt = 0;
	while (s[cnt])
	{
		strf[cnt] = (*f)(cnt, s[cnt]);
		cnt++;
	}
	strf[cnt] = '\0';
	return (strf);
}
