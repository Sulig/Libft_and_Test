/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:41:03 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/14 17:43:44 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	test_tolower(void)
{
	int		cnt;
	int		res;

	cnt = -200;
	res = 1;
	while (cnt < 181)
	{
		if (ft_tolower(cnt) != tolower(cnt))
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
		printf(" Expec: %i\n", tolower(cnt));
		printf(" Yours: %i\n", ft_tolower(cnt));
		return (0);
	}
	return (1);
}
