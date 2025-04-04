/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:06:56 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/06 15:14:46 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	public:

		AForm();
		AForm(const std::string name, const int beSigned, const int beExecute);
		AForm(AForm const &src);
		virtual ~AForm();
		std::string			getName(void) const;
		int					getGradeForSigned(void) const;
		int					getGradeForExecute(void) const;
		int					getIsSigned(void) const;
		void				beSigned(Bureaucrat src);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		AForm				&operator=(AForm const &rhs);
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
		class NotSignedException : public std::exception
		{
			public:
			
				virtual const char *what() const throw();
		};
	private:

		const std::string	name;
		bool				isSigned;
		const int			beSignedV;
		const int			beExecute;
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AForm_H */