NAME	= weapon

SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ		= $(SRC:.cpp=.o)

FLAG	= -Wall -Wextra -Werror -g3 -std=c++98

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