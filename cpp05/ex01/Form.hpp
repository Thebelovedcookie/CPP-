/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:44:42 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/22 14:44:42 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, const int beSigned, const int beExecute);
		Form(Form const &src);
		~Form();
		std::string	getName(void) const;
		int			getGradeForSigned(void) const;
		int			getGradeForExecute(void) const;
		int			getIsSigned(void) const;
		void		beSigned(Bureaucrat src);
		Form &operator=(Form const &rhs);

		class GradeTooHighException: public std::exception
		{
			public:

				virtual const char *what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public :
			
				virtual const char *what() const throw();
		};
	private:
		const std::string	name;
		bool				isSigned;
		const int			beSignedV;
		const int			beExecute;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */