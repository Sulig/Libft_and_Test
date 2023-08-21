/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:40:59 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/21 17:12:41 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		len;
	int		pos;

	len = 0;
	while (s[len])
		len++;
	pos = 0;
	while (pos <= len)
	{
		if ((unsigned char) s[pos] == (unsigned char) c)
			return ((char *) s + pos);
		pos++;
	}
	return (0);
}
