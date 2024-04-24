CC =cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = push_swap
NAME_B = checker

SRC = mainn.c ft_lstiter.c get_arg.c  ft_lstnew.c ft_atoi.c \
	get_center.c push.c swap.c rotate.c algo.c  free_list.c \
	check_errore.c  ft_split.c\


SRC_B = ./bonus/checkear_bonus.c ./bonus/get_next_line_bonus.c ./bonus/ft_split_bonus.c ./bonus/ft_strncmp_bonus.c \
	./bonus/push_bonus.c ./bonus/rotate_bonus.c  ./bonus/swap_bonus.c  ./bonus/ft_atoi_bonus.c  ./bonus/get_arg_bonus.c \
	./bonus/check_errore_bonus.c ./bonus/get_next_line_utils_bonus.c ./bonus/ft_lstnew_bonus.c  ./bonus/free_list_bonus.c\

OBJ = $(SRC:.c=.o)
OBJ_B =$(SRC_B:.c=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

bonus:$(NAME_B)

$(NAME_B):$(OBJ_B)
	$(CC) $(CFLAGS) -o $(NAME_B) $(OBJ_B)

# %.o:%.c push_swap.h ./bonus/checker_bonus.h
# 	$(CC) $(CFLAGS) -c $< -o $@ 
# OBJ:SRC push_swap.h
# 	$(CC) $(CFLAGS) -c $< -o $@ 
# OBJ_B:SRC_B ./bonus/checker.h
# 	$(CC) $(CFLAGS) -c $< -o $@ 
$(OBJ_B) : ./bonus/checker_bonus.h

$(OBJ) : push_swap.h

clean:
	$(RM) *.o 
	$(RM) ./bonus/*.o 
fclean:clean
	$(RM) $(NAME) $(NAME_B)
	
re:fclean all

.PHONY: all bonus clean fclean re