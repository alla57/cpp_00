CC = g++

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./

NAME = harl

SRC_PATH =	main.cpp			\
			Harl.class.cpp		\

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