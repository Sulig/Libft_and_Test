# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 16:14:42 by sadoming          #+#    #+#              #
#    Updated: 2023/07/10 16:50:35 by sadoming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

MAK = Makefile
NAME = libft.a
LIB = libft.h

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
	  ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
	  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
	  ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c\
	  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS = ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstadd_front_bonus.c\
	ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ = $(patsubst %.c, %.o, $(SRC))
OBJB = $(patsubst %.c, %.o, $(BONUS))
# ********************************************* #

all: $(NAME) bonus

%.o : %.c $(LIB) $(MAK)
	@gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "\033[1;32m Libft Compiled Successfully\033[1;97m\n"

bonus: $(OBJB)
	@ar rc $(NAME) $(OBJB)
	@echo "\033[1;32m Libft bonus Compiled Successfully\033[1;97m\n"

clean:
	@/bin/rm -f *.o

fclean : clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f .DS_Store

re: fclean all

.PHONY: all bonus clean fclean re
# ******************************************* #
