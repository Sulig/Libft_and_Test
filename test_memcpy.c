/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:33:13 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 18:24:21 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static int	test_3(void)
{
	char	*inip, *youp;
	char	ini[30] = "";
	char	you[30] = "";

	inip = memcpy(ini, "", 5);
	youp = ft_memcpy(you, "", 5);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\n Your memcpy don't return NULL if \\dst\\ or \\src\\ is NULL!\n");
		printf(" Expec: %s\n", inip);
		printf(" Yours: %s\n", youp);
		return (0);
	}
	return (1);
}

static int	test_2(void)
{
	char	*src, *inip, *youp;
	char	ini[30] = "";
	char	you[30] = "";

	src = "Don't copy this";
	inip = memcpy(ini, src, 0);
	youp = ft_memcpy(you, src, 0);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\n Your memcpy don't work with len 0!\n");
		printf(" Expec: %s\n", inip);
		printf(" Yours: %s\n", youp);
		return (0);
	}
	return (1);
}

static int	test_1(void)
{
	char	*src, *inip, *youp;
	char	ini[30] = "";
	char	you[30] = "";

	src = "Copy this please ** But don't copy this";
	inip = memcpy(ini, src, 17);
	youp = ft_memcpy(you, src, 17);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\n Your memcpy don't work with basic input!\n");
		printf(" Expec: %s\n", inip);
		printf(" Yours: %s\n", youp);
		return (0);
	}
	return (1);
}

int	test_memcpy(void)
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
	return (0);
}
