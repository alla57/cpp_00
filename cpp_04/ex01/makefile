CC = g++

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I./

NAME = Brain

SRC_PATH =	main.cpp				\
			Animal.class.cpp		\
			Dog.class.cpp			\
			Cat.class.cpp			\
			WrongAnimal.class.cpp	\
			WrongCat.class.cpp		\
			Brain.class.cpp

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