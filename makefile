CC =cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = push_swap
NAME_B = checker

SRC = test.c ft_lstiter.c get_arg.c  ft_lstnew.c ft_atoi.c \
	get_center.c push.c swap.c rotate.c algo.c  free_list.c \
	check_errore.c  ft_split.c\


SRC_B = ./bonus/checkear.c ./bonus/get_next_line.c ./bonus/ft_split.c ./bonus/ft_strncmp.c \
	./bonus/push.c ./bonus/rotate.c  ./bonus/swap.c  ./bonus/ft_atoi.c  ./bonus/get_arg.c ./bonus/check_errore.c \
	./bonus/get_next_line_utils.c ./bonus/ft_lstnew.c\

OBJ = $(SRC:.c=.o)
OBJ_B =$(SRC_B:.c=.o)

all:$(NAME)

$(NAME):$(OBJ) push_swap.h
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

bonus:$(NAME_B)

$(NAME_B):$(OBJ_B) ./bonus/checker.h
	$(CC) $(CFLAGS) -o $(NAME_B) $(OBJ_B)

# OBJ:SRC push_swap.h
# 	$(CC) $(CFLAGS) -c $< -o $@ 
# OBJ_B:SRC_B ./bonus/checker.h
# 	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) *.o 
	$(RM) ./bonus/*.o 
fclean:clean
	$(RM) $(NAME)
	
re:fclean all

.PHONY: all bonus clean fclean re