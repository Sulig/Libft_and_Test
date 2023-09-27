/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:23:10 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/14 17:43:18 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	test_isprint(void)
{
	int		cnt;
	int		res;

	cnt = -200;
	res = 1;
	while (cnt < 181)
	{
		if (ft_isprint(cnt) != isprint(cnt))
		{
			res = 0;
			break ;
		}
		cnt++;
	}
	if (res == 1)
		printf("\033[92m\tOK\n");
	else
	{
		printf("\033[91m\tKO!\n");
		printf(" Failed in cnt = %i\n", cnt);
		printf(" Expec: %i\n", isprint(cnt));
		printf(" Yours: %i\n", ft_isprint(cnt));
		return (0);
	}
	return (1);
}
