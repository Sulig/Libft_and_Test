# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 19:55:18 by sadoming          #+#    #+#              #
#    Updated: 2023/09/27 18:23:46 by sadoming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_libft.a
DIR = ./GetNextLine/
CFLAGS = -Wall -Wextra -Werror

MAK = Makefile
LIB = test_libft.h $(DIR)get_next_line.h

SRC = test_libft_main.c test_myapp_str.c test_lstcnt_tn.c test_isalnum.c test_isalpha.c\
		  test_isascii.c test_isdigit.c test_isprint.c test_toupper.c test_tolower.c test_strlen.c\
		  test_bzero.c test_strlcpy.c test_strchr.c test_strrchr.c test_strncmp.c test_strlcat.c\
		  test_strnstr.c test_atoi.c test_strdup.c test_memset.c test_memcpy.c test_memchr.c\
		  test_memcmp.c  test_memmove.c test_substr.c test_strjoin.c test_strtrim.c test_split.c\
		  test_itoa.c test_strmapi.c test_striteri.c test_putchar_fd.c test_putstr_fd.c\
		  test_putendl_fd.c test_putnbr_fd.c $(DIR)get_next_line.c $(DIR)get_next_line_utils.c

BONUS = test_lstnew.c test_lstsize.c test_lstadd_front.c test_lstlast.c test_lstadd_back.c\
			test_lstdelone.c test_lstclear.c test_lstiter.c test_lstmap.c

OBJ = $(patsubst %.c, %.o, $(SRC))
OBJB = $(patsubst %.c, %.o, $(BONUS))
#------------------------------------------------------------------------------#

all: $(NAME) bonus

%.o : %.c $(LIB) $(MAK)
	@gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "\033[1;32m Tests Compiled Successfully\033[1;97m\n"

bonus: $(OBJB)
	@ar rc $(NAME) $(OBJB)
	@echo "\033[1;32m Tests for bonus Compiled Successfully\033[1;97m\n"

clean:
	@/bin/rm -f *.o
	@/bin/rm -f $(DIR)/*.o

fclean : clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f .DS_Store

re: fclean all

.PHONY: all bonus clean fclean re
# ******************************************* #
