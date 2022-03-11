CC = g++

RM = rm -rf

CFLAGS = -Wall -Wextra -Wno-used -Werror -I./

NAME = phonebook

SRC_PATH =	main.cpp			\

SRC = $(SRC_PATH)

OBJ	= $(SRC:.c=.o)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

re : fclean all

.PHONY : all clean re