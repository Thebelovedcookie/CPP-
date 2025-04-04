#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog(): Animal() {
	std::cout << "Dog : A Dog is born." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &original): Animal(original) {
	std::cout << "Dog : A Dog is born." << std::endl;
	this->type = "Cat";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {
	std::cout << "Dog : A Dog passed away." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog	&Dog::operator=(Dog const &original)
{
	this->type = original.type;
	return (*this);
}

std::ostream &operator<<(std::ostream &Cout, Dog const &i )
{
	Cout << "type = " << i.getType();
	return (Cout);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const {
	std::cout << "Ouaf, Ouaf" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */