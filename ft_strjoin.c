/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:43:20 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/13 14:01:03 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_concat(const char *s1, const char *s2, char *str)
{
	int		cnt;
	int		ln;

	cnt = 0;
	ln = 0;
	while (s1[cnt])
	{
		str[cnt] = s1[cnt];
		cnt++;
	}
	while (s2[ln])
	{
		str[cnt] = s2[ln];
		cnt++;
		ln++;
	}
	return (str);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		ln;
	int		len;
	char	*str;

	ln = ft_strlen(s1);
	len = ft_strlen(s2);
	str = malloc((ln + len) + 1);
	if (str == 0)
		return (0);
	ft_bzero(str, (ln + len) + 1);
	str = ft_concat(s1, s2, str);
	return (str);
}
