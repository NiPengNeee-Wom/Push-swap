# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yplag <yplag@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/25 17:02:42 by yplag             #+#    #+#              #
#    Updated: 2015/03/05 10:06:39 by yplag            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIB = libft/libft.a

SRCS =	srcs/ft_errors.c	srcs/push_swap.c		srcs/ft_init.c		srcs/ft_sort.c\
   	  	srcs/ft_swap.c		srcs/ft_print.c			srcs/ft_rotate.c	srcs/ft_push.c\
		srcs/ft_algo.c		srcs/ft_get_flag.c		srcs/ft_rotate2.c	srcs/ft_errors2.c\
		srcs/ft_algo2.c

obj = $(SRCS:%.c=%.o)

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@make -C libft
	@gcc $(FLAG) $(SRCS) $(LIB) -o $(NAME)
fast:
	@gcc $(FLAG) $(SRCS) $(LIB) -o $(NAME)

clean:
	@rm -f $(SRCO)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C libft

re: fclean all
