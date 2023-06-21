/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:16:04 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 18:21:49 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static int	test_ret(char *src, char *dst, char *you, size_t len)
{
	if (ft_strlcat(you, src, len) != strlcat(dst, src, len))
	{
		printf("\tKO!\n Your strcat don't return the correct len!\n");
		return (0);
	}
	return (1);
}

int	test_strlcat(void)
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
		printf("\033[91m\tKO!\n Your strlcat don't work with basic input!\n");
		printf(" Expec: %s\n", dst);
		printf(" Yours: %s\n", you);
	}
	/**/
	pass = test_ret("Don't copy", dst, you, 0);
	if (test_myapp_str(youp, dstp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strlcat don't work with len 0!\n");
		printf(" Expec: %s\n", dst);
		printf(" Yours: %s\n", you);
	}
	/**/
	pass = test_ret("\0", dst, you, 1);
	if (test_myapp_str(youp, dstp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strlcat don't wotk with NULL src!\n");
		printf(" Expec: %s\n", dst);
		printf(" Yours: %s\n", you);
	}
	/**/
	pass = test_ret("0123456789", dst, you, -1);
	if (test_myapp_str(youp, dstp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strlcat don't work with len -1!\n");
		printf(" Expec: %s\n", dst);
		printf(" Yours: %s\n", you);
	}
	/**/
	pass = test_ret("\n\tab", dst, you, 20);
	if (test_myapp_str(youp, dstp) == 0)
   	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strlcat don't work with \\t\n");
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
