/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:57:45 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/05/30 21:01:24 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
    public:
		Contact(void);
		void		setFirstname(std::string _firstname);
		void		setLastname(std::string _lastname);
		void		setNickname(std::string _nickname);
		void		setPhoneNumber(std::string _phonenumber);
		void		setDarkestSecret(std::string _darkestsecret);
		std::string	getFirstname();
		std::string	getLastname();
		std::string	getNickname();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
		~Contact(void);
    private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestsecret;
};

#endif