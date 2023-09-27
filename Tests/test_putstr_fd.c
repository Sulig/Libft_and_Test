/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:48:14 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 20:02:27 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_putstr_fd(void)
{
	printf("\033[1;93m\t*~ Manual Test! ~*\n\n");
	printf("\033[0;37m\tTest: \"0123\", 0\n\t");
	ft_putstr_fd("0123", 0);
	printf("\n\tTest: \"abvc\", 1\n\t");
	ft_putstr_fd("abvc", 1);
	printf("\n\tTest: \"\\t*\", 2\n\t");
	ft_putstr_fd("\t*", 2);
	/**/
	printf("\n");
}
