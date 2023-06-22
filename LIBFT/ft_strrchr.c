/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:44:52 by sadoming          #+#    #+#             */
/*   Updated: 2023/05/12 19:33:19 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		if ((unsigned char) s[len] == (unsigned char) c)
			return ((char *) s + len);
		len--;
	}
	return (0);
}
