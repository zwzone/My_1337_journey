/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookSystem.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:23:47 by zwina             #+#    #+#             */
/*   Updated: 2022/07/31 16:37:39 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	intro(void);

int	main(void)
{
	PhoneBook	phonebook;
	intro();
	while (1)
	{
		std::string	line;
		if (!std::cin.eof())
			std::cout << "Enter a command >> ";
		std::getline(std::cin, line);
		if (line == "ADD")
			phonebook.addContact();
		else if (line == "SEARCH")
			phonebook.searching();
		else if (line == "EXIT" || std::cin.eof())
		{
			if (std::cin.eof())
				std::cout << std::endl;
			std::cout << "\e[38;5;10mYou're WELCOME next time ! :)\e[0m" << std::endl;
			break ;
		}
		else if (line != "")
			std::cout << "Wrong command. Try again." << std::endl;
	}
	return (0);
}

void	intro(void)
{
	std::cout <<
	"\e[38;5;10m\n      ___       __   __         ___    ___  __     ___       ___\n\
|  | |__  |    /  ` /  \\  |\\/| |__      |  /  \\     |  |__| |__\n\
|/\\| |___ |___ \\__, \\__/  |  | |___     |  \\__/     |  |  | |___\n\
\n\
 __        __        ___  __   __   __        __       __  ___  ___\n\
|__) |__| /  \\ |\\ | |__  |__) /  \\ /  \\ |__/ /__` \\ / /__`  |  |__   |\\/|\n\
|    |  | \\__/ | \\| |___ |__) \\__/ \\__/ |  \\ .__/  |  .__/  |  |___  |  |\n\
\e[0m" << std::endl;
}
