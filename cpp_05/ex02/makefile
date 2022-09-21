CXX = c++

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I./

NAME = Form

SRC_PATH =	main.cpp					\
			Bureaucrat.cpp				\
			AForm.cpp					\
			ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp		\
			PresidentialPardonForm.cpp	\

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