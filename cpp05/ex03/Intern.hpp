/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:45:23 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/28 10:49:04 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Form;

class Intern
{

	public:

		Intern();
		Intern(Intern const &src);
		~Intern();

		AForm	*makeForm(std::string formName, std::string formTarget);
		Intern &operator=(Intern const &rhs);

	private:

};

// std::ostream &operator<<(std::ostream &o, Intern const &i);

#endif /* ********************************************************** INTERN_H */