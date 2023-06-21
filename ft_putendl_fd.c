/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:46:05 by sadoming          #+#    #+#             */
/*   Updated: 2023/05/10 14:02:13 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		len;

	len = 0;
	while (s[len])
	{
		write(fd, &s[len], 1);
		len++;
	}
	write(fd, "\n", 1);
}
