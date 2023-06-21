# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 16:14:42 by sadoming          #+#    #+#              #
#    Updated: 2023/06/21 19:32:33 by sadoming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### Need this 4 test ##
NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

LIB = libft.h

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
	  ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
	  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
	  ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c\
	  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS = ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstadd_front.c ft_lstiter.c ft_lstlast.c\
	   	ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJ = $(patsubst %.c, %.o, $(SRC)) $(LIB)
OBJB = $(patsubst %.c, %.o, $(BONUS)) $(LIB)
#------------------------------------------------------------------------------------------------#

all: $(NAME)

%.o : %.c
	cc $(CFLAGS) -c -o $@ $< 

$(NAME): ${OBJ}
	ar rc $(NAME) $(OBJ)

bonus: ${OBJB}
	ar rc $(NAME) $(OBJB)

.PHONY: clean
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

# ********************************************************************************************** #

### Region 4 test files 4 Libft ###

# Variables:
TEST = test.out

TESTLIB = test_libft.h

TESTSRC = test_libft_main.c test_myapp_str.c test_lstcnt_tn.c test_isalnum.c test_isalpha.c\
		  test_isascii.c test_isdigit.c test_isprint.c test_toupper.c test_tolower.c test_strlen.c\
		  test_bzero.c test_strlcpy.c test_strchr.c test_strrchr.c test_strncmp.c test_strlcat.c\
		  test_strnstr.c test_atoi.c test_strdup.c test_memset.c test_memcpy.c test_memchr.c\
		  test_memcmp.c  test_memmove.c test_substr.c test_strjoin.c test_strtrim.c test_split.c\
		  test_itoa.c test_strmapi.c test_striteri.c test_putchar_fd.c test_putstr_fd.c\
		  test_putendl_fd.c test_putnbr_fd.c

TESTBONUS = test_lstnew.c test_lstsize.c test_lstadd_front.c test_lstlast.c test_lstadd_back.c\
			test_lstdelone.c test_lstclear.c test_lstiter.c test_lstmap.c

TOBJ = $(patsubst %.c, %.o, $(TESTSRC)) $(TESTLIB)
TOBJB = $(patsubst %.c, %.o, $(TESTBONUS)) $(TESTLIB)
#------------------------------------------------------------------------------#
# Test:

# make test.out:
$(TEST): $(TOBJ) $(TOBJB) $(OBJ) $(OBJB)
	@make
	@norminette $(SRC) $(BONUS)
	@gcc -o $(TEST) *.o
	@echo * "\n\n"

# ./test.out:
test: $(TEST)
	@./$(TEST)
	@leaks -atExit -- ./$(TEST)

.PHONY: remove
remove:
	/bin/rm -f $(TEST)

.PHONY: clear
clear:
	@make remove
	@make fclean

# ************************************************************************************************ #

# lldb:
DEB = debug.out
DEBB = $(SRC) $(BONUS) $(TESTSRC) $(TESTBONUS)

$(DEB): $(DEBB)
	@gcc -g $(DEBB) -o $(DEB)
	@echo Compiled! make debug to run lldb!

debug: $(DEB)
	@lldb $(DEB)

rmd:
	/bin/rm -f $(DEB)

# ************************************************************************************************ #
