/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:56:26 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 20:08:34 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_putnbr_fd(void)
{
	int		a;

	printf("\033[93m\t*~ Manual Test! ~*\n");
	a = 1234;
	printf("\033[0;37m\tTest: %i, 0\n\t", a);
	ft_putnbr_fd(a, 0);
	a = -1234;
	printf("\n\tTest: %i, 1\n\t", a);
	ft_putnbr_fd(a, 1);
	a = -0;
	printf("\n\tTest: %i, 2\n\t", a);
	ft_putnbr_fd(a, 2);
	/**/
	printf("\n");
}
