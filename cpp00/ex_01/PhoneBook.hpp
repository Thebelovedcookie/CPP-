/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:38:18 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/05 14:31:20 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "utils.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <string>

class PhoneBook
{
	public:
		PhoneBook(void);
		void	routine();
		~PhoneBook(void);
	private:
		Contact		_contact[8];
		int			index;
		int			oldest_contact;
		void		add_contact();
		void		search_contact(int nb);
		int			listContact();
		int			searching_for();
};

#endif