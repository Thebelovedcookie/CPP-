NAME	= Bureaucrat

SRC		= main.cpp Bureaucrat.cpp

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