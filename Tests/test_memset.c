/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:14:06 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 18:22:56 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static int  test_1(void)
{
	char	*inip, *youp;
	char	ini[30] = "123456";
	char	you[30] = "123456";

	inip = ini;
	youp = you;
	memset(ini, '-', 30);
	ft_memset(you, '-', 30);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\nYour memset don't work with basic input!\n");
		printf(" Expec: %s\n", ini);
		printf(" Yours: %s\n", you);
		return (0);
	}
	return (1);
}

static int	test_2(void)
{
	char	*inip, *youp;
	char	ini[30] = "123456";
	char	you[30] = "123456";

	inip = ini;
	youp = you;
	memset(ini, '\t', 10);
	ft_memset(you, '\t', 10);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\n Your memset don't work with \\t!\n");
		printf(" Expec: %s\n", ini);
		printf(" Yours: %s\n", you);
		return (0);
	}
	return (1);
}

static int  test_3(void)
{
	char	*inip, *youp;
	char	ini[30] = "123456";
	char	you[30] = "123456";

	inip = ini;
	youp = you;
	memset(ini, '1', 1);
	ft_memset(you, '1', 0);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\n Your memset don't work with len 0!\n");
		printf(" Expec: %s\n", ini);
		printf(" Yours: %s\n", you);
		return (0);
	}
	return (1);
}

int	test_memset(void)
{
	int	t1, t2, t3;

	t1 = test_1();
	t2 = test_2();
	t3 = test_3();
	if (t1 == 1 && t2 == 1 && t3 == 1)
	{
		printf("\033[92m\tOK\n");
		return (1);
	}
	return(0);
}
