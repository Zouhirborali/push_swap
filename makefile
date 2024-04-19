CC =cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = push_swap
NAME_B = checker

SRC = test.c ft_lstiter.c get_arg.c  ft_lstnew.c ft_atoi.c \
	get_center.c push.c swap.c rotate.c algo.c  free_list.c \
	check_errore.c  ft_split.c\


SRC_B = ./checker/checkear.c ./checker/get_next_line.c ./checker/ft_split.c ./checker/ft_strncmp.c \
	./checker/push.c ./checker/rotate.c  ./checker/swap.c  ./checker/ft_atoi.c  ./checker/get_arg.c ./checker/check_errore.c \
	./checker/get_next_line_utils.c ./checker/ft_lstnew.c\

OBJ = $(SRC:.c=.o)
OBJ_B =$(SRC_B:.c=.o)

all:$(NAME);

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

bonus:$(OBJ_B)
	$(CC) $(CFLAGS) -o $(NAME_B) $(OBJ_B)

%.o:%.c 
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) *.o 
	$(RM) ./checker/*.o 
fclean:clean
	$(RM) $(NAME)
	
re:fclean all

.PHONY: all bonus clean fclean re