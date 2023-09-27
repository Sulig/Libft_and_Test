/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:42:01 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 19:42:27 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	fun(unsigned int i, char *ch)
{
	printf("%c", *ch + i);
}

void	test_striteri(void)
{
	char	*you;

	printf("\033[1;93m\t*~ Manual Test! ~*\n\n");
	/* Test_1 */
	you = " esk";
	printf("\033[0;37m\tTest: \"%s\"\n\t", you);
	printf("Your: ");
	ft_striteri(you, *fun);
	/**/
	/* Test_2 */
	you = "01234";
	printf("\n\tTest: \"%s\"\n\t", you);
	printf("Your: ");
	ft_striteri(you, *fun);
	/**/
	/* Test_3 */
	you = "\0";
	printf("\n\tTest: \"\\0\"\n\t");
	printf("Your: ");
	ft_striteri(you, *fun);
	/**/
	printf("*\n");
}
