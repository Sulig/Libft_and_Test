/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:52:17 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 20:03:16 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_putendl_fd(void)
{
	printf("\033[1;93m\t*~ Manual Test! ~*\n\n");
	printf("\033[0;37m\tTest: \"0123\", 0\n\t");
	ft_putendl_fd("0123", 0);
	printf("Test: \"abvc\", 1\n\t");
	ft_putendl_fd("abvc", 1);
	printf("Test: \"\\t*\", 2\n\t");
	ft_putendl_fd("\t*", 2);
	/**/
	printf("\n");
}
