/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:47:45 by zwina             #+#    #+#             */
/*   Updated: 2022/07/31 13:28:39 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(const std::string &str)
{
	_first_name = str;
}

void	Contact::setLastName(const std::string &str)
{
	_last_name = str;
}

void	Contact::setNickname(const std::string &str)
{
	_nickname = str;
}

void	Contact::setPhoneNumber(const std::string &str)
{
	_phone_number = str;
}

void	Contact::setDarkestSecret(const std::string &str)
{
	_darkest_secret = str;
}

static void	printing(const std::string& str);

void	Contact::print_in_field(Type t) const
{
	switch (t)
	{
		case e_first_name :	printing(_first_name);break;
		case e_last_name :	printing(_last_name);break;
		case e_nickname :	printing(_nickname);break;
		default :			std::cout << "(Unknown)";break;
	}
}

static void	printing(const std::string& str)
{
	if (str.length() <= 10)
		std::cout << str;
	else
	{
		std::string sub = str.substr(0, 10);
		sub[9] = '.';
		std::cout << sub;
	}
}

void	Contact::print(Type t) const
{
	switch (t)
	{
		case e_first_name :		std::cout << _first_name << std::endl;break;
		case e_last_name :		std::cout << _last_name << std::endl;break;
		case e_nickname :		std::cout << _nickname << std::endl;break;
		case e_phone_number :	std::cout << _phone_number << std::endl;break;
		case e_darkest_secret :	std::cout << _darkest_secret << std::endl;break;
		default :				std::cout << "(Unknown)" << std::endl;break;
	}
}
