NAME	= ClapTrap

SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ		= $(SRC:.cpp=.o)

FLAG	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

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