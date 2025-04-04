#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): Animal() {
	std::cout << "Cat : A Cat is born." << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat &original): Animal(original) {
	std::cout << "Cat : A Cat has been cloned." << std::endl;
	this->type = original.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {
	std::cout << "Cat : A Cat passed away." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat	&Cat::operator=(Cat const &original) {
	this->type = original.type;
	return (*this);
}

std::ostream	&operator<<(std::ostream &Cout, Cat const &i) {
	Cout << "type = " << i.getType();
	return (Cout);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const {
	std::cout << "Miaou, Miaou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */