NAME	= replace

SRC		= main.cpp

OBJ		= $(SRC:.cpp=.o)

FLAG	= -Wall -Wextra -Werror -std=c++98

CC		= c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) $(FLAG) -c $(SRC)

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all