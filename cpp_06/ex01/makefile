CXX = c++

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I./ -std=c++98

NAME = Uintptr

SRC_PATH =	main.cpp				\

SRC = $(SRC_PATH)

OBJ	= $(SRC:.cpp=.o)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) -o $(NAME) $(SRC)

re : fclean all

.PHONY : all clean re