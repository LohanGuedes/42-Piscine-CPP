NAME = zombie

CC = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean, all, re
