/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:47:27 by zwina             #+#    #+#             */
/*   Updated: 2022/07/31 16:38:09 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _nContact(0)
{
}

void	printContactType(int n);
bool	allDigit(const std::string &str);

void	PhoneBook::addContact(void)
{
	std::string	strs[5];
	if (_nContact < 8)
		_nContact++;
	for (int i = 0; i < 5; i++)
	{
		while (true)
		{
			printContactType(i);
			std::getline(std::cin, strs[i]);
			if (std::cin.eof())
				return ;
			if (strs[i] != "")
			{
				if (i == 3 && !allDigit(strs[i]))
				{
					std::cout << "\e[38;5;196m\tThis is not a Phone Number !\e[0m" << std::endl;
					continue ;
				}
				break ;
			}
		}
	}
	_contacts[_index].setFirstName(strs[0]);
	_contacts[_index].setLastName(strs[1]);
	_contacts[_index].setNickname(strs[2]);
	_contacts[_index].setPhoneNumber(strs[3]);
	_contacts[_index].setDarkestSecret(strs[4]);
	if (_index == 7)
		_index = 0;
	else
		_index++;
}

void	printContactType(int n)
{
	switch (n)
	{
		case 0:	std::cout << "\tFirst Name\t: ";break;
		case 1:	std::cout << "\tLast Name\t: ";break;
		case 2:	std::cout << "\tNickname\t: ";break;
		case 3:	std::cout << "\tPhone Number\t: ";break;
		case 4:	std::cout << "\tDarkest Secret\t: ";break;
		default:	std::cout << "(Unknown)";break;
	}
}

bool	allDigit(const std::string &str)
{
	size_t length = str.length();
	for (size_t i = 0; i < length; i++)
		if (!std::isdigit(str[i]))
			return (false);
	return (true);
}

void ignoreLine(void);

void	PhoneBook::searching(void) const
{
	if (_nContact == 0)
	{
		std::cout << "\e[38;5;11m[ Zero Available Contact ]\e[0m" << std::endl;
		return ;
	}
	std::cout << "\e[38;5;11m";
	std::cout	<< std::setw(10) << "index" << '|'
				<< std::setw(10) << "first name" << '|'
				<< std::setw(10) << "last name" << '|'
				<< std::setw(10) << "nickname" << std::endl;
	for (size_t i = 0; i < _nContact; i++)
	{
		std::cout << std::setw(10) << i;
		std::cout << '|' << std::setw(10);
		_contacts[i].print_in_field(e_first_name);
		std::cout << '|' << std::setw(10);
		_contacts[i].print_in_field(e_last_name);
		std::cout << '|' << std::setw(10);
		_contacts[i].print_in_field(e_nickname);
		std::cout << std::endl;
	}
	std::cout << "\e[0m";
	size_t	index;
	std::cout << "Enter an index to display the informations : ";
	std::cin >> index;
	if (std::cin.fail() or index >= _nContact)
		std::cerr << "\e[38;5;196mWrong index !\e[0m" << std::endl;
	else
	{
		std::cout << "\e[38;5;3m";
		std::cout << "\tFrist Name\t> ";_contacts[index].print(e_first_name);
		std::cout << "\tLast Name\t> ";_contacts[index].print(e_last_name);
		std::cout << "\tNickname\t> ";_contacts[index].print(e_nickname);
		std::cout << "\tLast Name\t> ";_contacts[index].print(e_phone_number);
		std::cout << "\tLast Name\t> ";_contacts[index].print(e_darkest_secret);
		std::cout << "\e[0m";
	}
	std::cin.clear();
	ignoreLine();
}

void ignoreLine(void)
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
