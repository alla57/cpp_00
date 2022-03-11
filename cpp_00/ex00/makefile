CC = g++

RM = rm -rf

CFLAGS = -Wall -Wextra -Wno-used -Werror

NAME = megaphone

SRC_PATH =	megaphone.cpp

SRC = $(SRC_PATH)

OBJ	= $(SRC:.cpp=.o)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(SRC)

re : fclean all

.PHONY : all clean re