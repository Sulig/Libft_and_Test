/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:56:23 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/19 18:58:56 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static char	fun(unsigned int i, char ch)
{
	ch += i;
	return (ch);
}

int	test_strmapi(void)
{
	int		pass = 1;
	char	*exp, *you;

	/* Test_1 */
	you = ft_strmapi(" esk", *fun);
	exp = " fun";
	if (test_myapp_str(you, exp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strmapi don't work with basic input!\n");
		printf(" Expec: %s\n", exp);
		printf(" Yours: %s\n", you);
	}
	free(you);
	/**/
	/* Test_2 */
	you = ft_strmapi("01234", *fun);
	exp = "02468";
	if (test_myapp_str(you, exp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strmapi don't work with numbers!\n");
		printf(" Expec: %s\n", exp);
		printf(" Yours: %s\n", you);
	}
	free(you);
	/**/
	/* Test_3 */
	you = ft_strmapi("\t\t\t\t\t", *fun);
	exp = "\t\n\v\f\r";
	if (test_myapp_str(you, exp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strmapi don't work with \\!\n");
		printf(" Expec: %s\n", exp);
		printf(" Yours: %s\n", you);
	}
	free(you);
	/**/
	/* Test_4 */
	you = ft_strmapi("\0", *fun);
	exp = "\0";
	if (test_myapp_str(you, exp) == 0)
	{
		pass = 0;
		printf("\033[91m\tKO!\n Your strmapi don't work with NULL!\n");
		printf(" Expec: %s*\n", exp);
		printf(" Yours: %s*\n", you);
	}
	free(you);
	/**/
	if (pass == 1)
		printf("\033[92m\tOK\n");
	return (pass);
}
