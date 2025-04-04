/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <mmahfoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:34:31 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/06/11 11:16:05 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	my_replace_help(std::string str, std::string to_erase, std::string to_place)
{
	std::size_t			pos;
	pos = str.find(to_erase);
	while (pos != std::string::npos)
	{
		str.erase(pos, to_erase.length());
		str.insert(pos, to_place);
		pos = str.find(to_erase);
	}
	return (str);
}

void    my_replace(std::ifstream *infile, std::ofstream *outfile, std::string s1, std::string s2)
{
	std::string tmp;
	
	
	(void)s1;
	(void)s2;
	while (getline(*infile, tmp, '\0')) {
		tmp = my_replace_help(tmp, s1, s2);
        *outfile << tmp << std::endl;
    }
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		 std::cout << "Please enter <filename> <word 1> <word 2>" << std::endl;
		 return (-1);
	}
    std::ifstream	infile(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error : "
		<< argv[1] << ": No such file or directory or permission is denied" << std::endl;
		return (-1);
	}
	std::string		tmp = argv[1] ;
	std::string		tmp2 = tmp + ".replace";
	const char *	tmp3 = tmp2.c_str();
    std::ofstream	outfile(tmp3);
	if (outfile.fail())
	{
		std::cout << "Error : "
		<< tmp3 << ": permission is denied" << std::endl;
		infile.close();
		return (-1);
	}
	if (argv[2][0] != '\0')
		my_replace(&infile, &outfile, argv[2], argv[3]);
	else
		std::cout << "make sure you enter a value to be replace" << std::endl;
	outfile.close();
	infile.close();
	return (0);
}