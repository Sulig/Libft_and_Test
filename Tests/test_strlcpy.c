/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:19:50 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 18:21:02 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static int	test_ret(char *src, char *dst, char *you, size_t len)
{
	if (ft_strlcpy(you, src, len) != strlcpy(dst, src, len))
	{
		printf("\033[91m\tKO!\n Your strcpy don't return the correct len!\n");
		return (0);
	}
	return (1);
}

int	test_strlcpy(void)
{
	int		pass;
	char	*dstp, *youp;
	char	dst[30];
	char	you[30];

	dstp = dst;
	youp = you;
	/**/
	pass = test_ret("Copy this", dst, you, 10);
	if (test_myapp_str(youp, dstp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strlcpy don't work with basic input!\n");
		printf(" Expec: %s\n", dst);
		printf(" Yours: %s\n", you);
	}
	/**/
	pass = test_ret("Don't copy", dst, you, 0);
	if (test_myapp_str(youp, dstp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strlcpy don't work with len 0!\n");
		printf(" Expec: %s\n", dst);
		printf(" Yours: %s\n", you);
	}
	/**/
	pass = test_ret("\0", dst, you, 1);
	if (test_myapp_str(youp, dstp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strlcpy don't wotk with NULL src!\n");
		printf(" Expec: %s\n", dst);
		printf(" Yours: %s\n", you);
	}
	/**/
	pass = test_ret("0123456789", dst, you, -1);
	if (test_myapp_str(youp, dstp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strlcpy don't work with len -1!\n");
		printf(" Expec: %s\n", dst);
		printf(" Yours: %s\n", you);
	}
	/**/
	pass = test_ret("\n\tab", dst, you, 20);
	if (test_myapp_str(youp, dstp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strlcpy don't work with \\t\n");
		printf(" Expec: %s\n", dst);
		printf(" Yours: %s\n", you);
	}
	/**/
	if (pass == 1)
	{
		printf("\033[92m\tOK\n");
		return (1);
	}
	return (0);
}
