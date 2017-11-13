
NAME= Colleen

SRCS= Colleen.c

OBJS= $(SRCS:.c=.o)
FLAGS= -Wall -Wextra -Werror


$(NAME): $(OBJS)
	@gcc $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n"
	@echo "\033[37;1m  ,__________,   ,______________, \033[0m"
	@echo "\033[37;1m  |          |   |               \     \033[0m"
	@echo "\033[37;1m  |___,      |   |     ,____,     \   \033[0m"
	@echo "\033[37;1m     /      /    |     |     \     \  \033[0m"
	@echo "\033[37;1m    /      /     |     |      \     \ \033[0m"
	@echo "\033[37;1m   /______/      |_____|      /     / \033[0m"
	@echo "\033[37;1m  ,________________________./      /  \033[0m"
	@echo "\033[37;1m  |                               /   \033[0m"
	@echo "\033[37;1m  |_____________________________./     \033[0m"
	@echo "\033[31;1m  +--------------------------------+\033[0m"
	@echo "\033[31;1m  | ZDTEAM  @  42 SCHOOL   2 0 1 7 |\033[0m"
	@echo "\033[31;1m  +--------------------------------+\033[0m"
	@echo "\n"

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "\033[37mall $(NAME)_files.o are deleted\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m$(NAME) is deleted\033[0m"

re:  fclean all

norme: fclean
	@norminette Colleen.c
	@norminette Makefile
	@make re

.PHONY: all clean fclean re
