/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:40:48 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 18:14:48 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int		test_strtrim(void)
{
	int		pass = 1;
	char	*you, *exp;

	/* Test_1 */
	you = ft_strtrim("666Cut666", "6");
	exp = "Cut";
	if (test_myapp_str(you, exp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strtrim don't work with basic input!\n");
		printf(" Expec: %s\n", exp);
		printf(" Yours: %s\n", you);
	}
	free(you);
	/**/
	/* Test_2 */
	you = ft_strtrim("\t\t\t   <Cut> <Don't cut>  \t\t\t", " \t");
	exp = "<Cut> <Don't cut>";
	if (test_myapp_str(you, exp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strtrim don't work!\n");
		printf(" Expec: %s\n", exp);
		printf(" Yours: %s\n", you);
	}
	free(you);
	/**/
	/* Test_3 */
	you = ft_strtrim("Don't\tcut", "\t");
	exp = "Don't\tcut";
	if (test_myapp_str(you, exp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strtrim don't work!\n");
		printf(" Expec: %s\n", exp);
		printf(" Yours: %s\n", you);
	}
	free(you);
	/**/
	/* Test_4 */
	you = ft_strtrim("\0Hiden\0", "\0");
	exp = "\0";
	if (test_myapp_str(you, exp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strtrim don't work!\n");
		printf(" Expec: %s\n", exp);
		printf(" Yours: %s\n", you);
	}
	free(you);
	/**/
	if (pass == 1)
		printf("\033[92m\tOK\n");
	return (pass);
}
