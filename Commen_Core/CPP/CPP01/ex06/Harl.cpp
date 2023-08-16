/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:45:07 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:56:53 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout
		<< "\e[92m[ DEBUG ]\e[0m" << std::endl
		<< "I love having extra bacon for my "
		"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
		<< std::endl;
}

void Harl::info(void) {
	std::cout
		<< "\e[92m[ INFO ]\e[0m" << std::endl
		<< "I cannot believe adding extra bacon costs more money. You "
		"didn’t put enough bacon in my burger! If you did, I wouldn’t be "
		"asking for more!"
		<< std::endl;
}

void Harl::warning(void) {
	std::cout
		<< "\e[92m[ WARNING ]\e[0m" << std::endl
		<< "I think I deserve to have some extra bacon for free. I’ve been "
		"coming for years whereas you started working here since last month."
		<< std::endl;
}

void Harl::error(void) {
	std::cout << "\e[92m[ ERROR ]\e[0m" << std::endl
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

typedef void (Harl::*pFun)(void);

void Harl::complain(std::string level) {
	pFun levelsFun[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levelsStr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;
	for (int i = 0; i < 4; i++) {
		if (level == levelsStr[i]) {
			index = i;
			break;
		}
	}
	switch (index)
	{
		case 0 :
			(this->*levelsFun[0])();
		case 1 :
			(this->*levelsFun[1])();
		case 2 :
			(this->*levelsFun[2])();
		case 3 :
			(this->*levelsFun[3])();
			break ;
		default :
			std::cout << "\e[91m[ Probably complaining about insignificant problems ]\e[0m" << std::endl;
	}
}
