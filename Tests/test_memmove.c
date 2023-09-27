/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:54:43 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 18:23:41 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static int	test_4(void)
{
	char	*inip, *youp;
	char	ini[40] = "But nobody cames\t It's me, Chara";
	char	you[40] = "But nobody cames\t It's me, Chara";

	inip = memmove(ini + 1, ini, 15);
	youp = ft_memmove(you + 1, you, 15);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\n Overlaping!\n");
		printf(" Expec: %s\n", inip);
		printf(" Yours: %s\n", youp);
		return (0);
	}
	return (1);
}

static int	test_3(void)
{
	char    *inip, *youp;
	char    ini[30] = "";
	char    you[30] = "";

	inip = memmove(ini, "", 5);
	youp = ft_memmove(you, "", 5);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\n Your memmove don't return NULL if \\dst\\ or \\src\\ is NULL!\n");
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
	inip = memmove(ini, src, 0);
	youp = ft_memmove(you, src, 0);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\n Your memmove don't work with len 0!\n");
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
	inip = memmove(ini, src, 17);
	youp = ft_memmove(you, src, 17);
	if (test_myapp_str(youp, inip) == 0)
	{
		printf("\033[91m\tKO!\n Your memmove don't work with basic input!\n");
		printf(" Expec: %s\n", inip);
		printf(" Yours: %s\n", youp);
		return (0);
	}
	return (1);
}

int	test_memmove(void)
{
	int		t1, t2, t3, t4;

	t1 = test_1();
	t2 = test_2();
	t3 = test_3();
	t4 = test_4();
	if (t1 == 1 && t2 == 1 && t3 == 1 && t4 == 1)
	{
		printf("\033[92m\tOK\n");
		return (1);
	}
	return (0);
}
