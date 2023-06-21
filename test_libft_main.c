/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:01:47 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/21 19:40:23 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	sep(void)
{
	printf("\033[1;36m*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
}

int	main(void)
{
	int		pass = 0;
	int		bonus = 0;

	printf("\033[1;34m\t     ~ Made by Sadoming ~\n");
	printf("\n\033[1;36m**///////////////////////////////////////////**\n");
	printf("**/              Testing Libft              /**\n");
	printf("**///////////////////////////////////////////**\n\n");
	/**/
	printf("\033[0;93mPlease test * ft_calloc * in other way\n");
	sep();
	/**/
	printf("\033[1;37mTesting: ft_isalnum\t");
	pass += test_isalnum();
	printf("\033[1;37mTesting: ft_isalpha\t");
	test_isalpha();
	printf("\033[1;37mTesting: ft_isascii\t");
	pass += test_isascii();
	printf("\033[1;37mTesting: ft_isdigit\t");
	pass += test_isdigit();
	printf("\033[1;37mTesting: ft_isprint\t");
	pass += test_isprint();
	printf("\033[1;37mTesting: ft_toupper\t");
	pass += test_toupper();
	printf("\033[1;37mTesting: ft_tolower\t");
	pass += test_tolower();
	printf("\033[1;37mTesting: ft_strlen\t");
	pass += test_strlen();
	printf("\033[1;37mTesting: ft_bzero\t");
	pass += test_bzero();
	printf("\033[1;37mTesting: ft_strlcpy\t");
	pass += test_strlcpy();
	printf("\033[1;37mTesting: ft_strlcat\t");
	pass += test_strlcat();
	printf("\033[1;37mTesting: ft_strchr\t");
	pass += test_strchr();
	printf("\033[1;37mTesting: ft_strrchr\t");
	pass += test_strrchr();
	printf("\033[1;37mTesting: ft_strncmp\t");
	pass += test_strncmp();
	printf("\033[1;37mTesting: ft_strnstr\t");
	pass += test_strnstr();
	printf("\033[1;37mTesting: ft_atoi\t");
	pass += test_atoi();
	printf("\033[1;37mTesting: ft_strdup\t");
	pass += test_strdup();
	/**/
	printf("\n\033[1;37mTesting: ft_memset\t");
	pass += test_memset();
	printf("\033[1;37mTesting: ft_memcpy\t");
	pass += test_memcpy();
	printf("\033[1;37mTesting: ft_memchr\t");
	pass += test_memchr();
	printf("\033[1;37mTesting: ft_memcmp\t");
	pass += test_memcmp();
	printf("\033[1;37mTesting: ft_memmove\t");
	pass += test_memmove();
	/**/
	printf("\033[1;37m\nTesting: ft_substr\t");
	pass += test_substr();
	printf("\033[1;37mTesting: ft_strjoin\t");
	pass += test_strjoin();
	printf("\033[1;37mTesting: ft_strtrim\t");
	pass += test_strtrim();
	printf("\033[1;37mTesting: ft_split\t");
	pass += test_split();
	printf("\033[1;37mTesting: ft_itoa\t");
	pass += test_itoa();
	printf("\033[1;37mTesting: ft_strmapi\t");
	pass += test_strmapi();
	/**/
	if (pass == 27)
		printf("\033[1;92m\n^~ The tests are OK!! 🎉 ~^\n");
	else if (pass == 0)
		printf("\033[1;91m\n^~ So bad! the tests are KO!! ~^\n\tYou don't have anything better to do?\n");
	else
		printf("\033[0;93m\n^~ Revisa tu codigo!! ~^\t%i\n", pass);
	/**/
	printf("\033[1;37m\nTesting: ft_striteri\t");
	test_striteri();
	printf("\033[1;37m\nTesting: ft_putchar_fd\t");
	test_putchar_fd();
	printf("\033[1;37m\nTesting: ft_putstr_fd\t");
	test_putstr_fd();
	printf("\033[1;37m\nTesting: ft_putendl_fd\t");
	test_putendl_fd();
	printf("\033[1;37mTesting: ft_putnbr_fd\t");
	test_putnbr_fd();
	/**/
	sep();
	/**/
	/*Tests for bonus*/
	printf("\033[1;36m|- ** ~~ TESTS FOR BONUS ~~ ** -|\n\n");
	printf("\033[1;37m|- Testing: ft_lstnew\t");
	bonus += test_lstnew();
	printf("\033[1;37m|- Testing: ft_lstadd_front");
	bonus += test_lstadd_front();
	printf("\033[1;37m|- Testing: ft_lstsize\t");
	bonus += test_lstsize();
	printf("\033[1;37m|- Testing: ft_lstlast\t");
	bonus += test_lstlast();
	printf("\033[1;37m|- Testing: ft_lstadd_back");
	bonus += test_lstadd_back();
	printf("\033[1;37m|- Testing: ft_lstdelone");
	bonus += test_lstdelone();
	printf("\033[1;37m|- Testing: ft_lstclear\t");
	bonus += test_lstclear();
	printf("\033[1;37m\n|- Testing: ft_lstiter\t");
	bonus += test_lstiter();
	printf("\033[1;37m\n\n|- Testing: ft_lstmap\t");
	bonus += test_lstmap();
	if (bonus == 9)
		printf("\033[1;92m\n^~ Tests bonus are OK!! 🎉 ~^\n");
	else if (bonus == 0)
		printf("\033[1;91m\n^~ All bonus KO!! ~^\n");
	else
		printf("\033[1;93m\n^~ Revisa los bous!! ~^\t\t%i\n", bonus);
	sep();
	/**/
	printf("\033[0;95m");
	return (0);
}
