/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:38:30 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 18:10:04 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	test_strncmp(void)
{
	int		pass = 0;
	char	*s1, *s2;

	pass = 1;
	/**/
	s1 = "0123456789";
	s2 = "9876543210";
	if (ft_strncmp(s1, s2, 4) != strncmp(s1, s2, 4))
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strncmp don't work with basic input!\n");
		printf(" Expec: %i\n", strncmp(s1, s2, 4));
		printf(" Yours: %i\n", ft_strncmp(s1, s2, 4));
	}
	/**/
	s1 = "9876543210";
	if (ft_strncmp(s1, s1, 1) != strncmp(s1, s1, 1))
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strncmp don't work with s1 == s2");
		printf(" Expec: %i\n", strncmp(s1, s1, 1));
		printf(" Yours: %i\n", ft_strncmp(s1, s1, 1));
	}
	/**/
	s1 = "/200_*";
	s2 = "/23_*";
	if (ft_strncmp(s1, s2, 1) != strncmp(s1, s2, 1))
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strncmp don't work with \\200!\n");
		printf(" Expec: %i\n", strncmp(s1, s2, 1));
		printf(" Yours: %i\n", ft_strncmp(s1, s2, 1));
	}
	/**/
	s1 = "0123456789";
	s2 = "9876543210";
	if (ft_strncmp(s1, s2, -1) != strncmp(s1, s2, -1))
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strncmp don't work with n -1!\n");
		printf(" Expec: %i\n", strncmp(s1, s2, -1));
		printf(" Yours: %i\n", ft_strncmp(s1, s2, -1));
	}
	/**/
	if (pass == 1)
	{
		printf("\033[92m\tOK\n");
		return (1);
	}
	return (0);
}
