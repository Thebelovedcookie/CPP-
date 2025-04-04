/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:26:01 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/10/11 14:52:51 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();
		
		const std::string	getName() const;
		int					getGrade() const;
		void				setGrade(int grade);
		Bureaucrat			&operator=(Bureaucrat const &rhs);
		
		void				incrementGrade(void);
		void				decrementGrade(void);

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
		std::string const 	name;
		int					grade;
		
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif /************************ BUREAUCRAT_H */