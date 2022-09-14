CC = g++

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I./ -std=c++98

NAME = Materia

SRC_PATH =	main.cpp				\
			AMateria.cpp			\
			Character.cpp			\
			Ice.cpp					\
			Cure.cpp				\
			MateriaSource.cpp		\
			LinkedList.cpp			\

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