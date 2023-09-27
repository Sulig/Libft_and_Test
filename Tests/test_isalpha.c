/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:25:05 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/14 17:42:36 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	test_isalpha(void)
{
	int		cnt;
	int		res;

	cnt = -200;
	res = 1;
	while (cnt < 181)
	{
		if (ft_isalpha(cnt) != isalpha(cnt))
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
		printf(" Expec: %i\n", isalpha(cnt));
		printf(" Yours: %i\n", ft_isalpha(cnt));
		return (0);
	}
	return (1);
}
