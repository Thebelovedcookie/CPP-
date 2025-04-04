NAME	= exe

SRC		= main.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Bureaucrat.cpp Intern.cpp


OBJ		= $(SRC:.cpp=.o)

FLAG	= -Wall -Wextra -Werror -std=c++98

CC		= c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) $(FLAG) -c $(SRC)

clean : 
	rm -fr $(OBJ)
	
fclean : clean
	rm -rf $(NAME)

re : fclean all