NAME	= lvl1test

SRCS	= main.c	putstr.c	fizzbuzz.c \
	  ft_strlen.c	ft_strcpy.c	ft_swap.c \

OBJ	= $(SRCS:%.c=%.o)

FLAGS	= -Wall -Werror -Wextra

.PHONY	:	all clean fclean re

all	: 	$(NAME)

%.o	: 	%.c
		gcc $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
		@gcc $(FLAGS) -o $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
	
