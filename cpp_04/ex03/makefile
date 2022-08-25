CC = g++

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I./

NAME = Character

SRC_PATH =	main.cpp				\
			AMateria.cpp			\
			Character.cpp			\
			Ice.cpp					\
			MateriaSource.cpp		\

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