CC = g++

RM = rm -rf

CFLAGS = -Wall -Wextra -Wno-used -Werror -I./

NAME = human

SRC_PATH =	main.cpp			\
			Weapon.cpp			\
			HumanA.cpp			\
			HumanB.cpp			\

SRC = $(SRC_PATH)

OBJ	= $(SRC:.cpp=.o)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

re : fclean all

.PHONY : all clean re