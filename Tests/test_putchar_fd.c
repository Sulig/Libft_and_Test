/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:33:13 by sadoming          #+#    #+#             */
/*   Updated: 2023/09/27 13:30:34 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_putchar_fd(void)
{
	printf("\033[1;93m\t*~ Manual Test! ~*\n\n");
	printf("\033[0;37m\tTest: \'0\', 0\n\t");
	ft_putchar_fd('0', 0);
	printf("\n\tTest: \'a\', 1\n\t");
	ft_putchar_fd('a', 1);
	printf("\n\tTest: \'\\t\', 2\n\t");
	ft_putchar_fd('\t', 2);
	ft_putchar_fd('*', 1);
	/**/
	printf("\n");
}
