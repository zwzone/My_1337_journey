/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:44:28 by zwina             #+#    #+#             */
/*   Updated: 2022/08/27 17:51:43 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <cstddef>

int main(int ac, char **av) {
	if (ac != 4) // check number of args
	{
		std::cerr << "\e[31mMissing arguments !\e[0m" << std::endl;
		return (1);
	}
	// set file strings
	std::string fileInStr(av[1]);
	std::string fileOutStr(av[1]);
	std::string replaceFrom(av[2]);
	std::string replaceTo(av[3]);
	fileOutStr += ".replace";
	// set file streams
	std::ifstream fileIn(fileInStr);
	if (!fileIn.is_open()) // check InFile is opened
	{
		std::cerr << "\e[31mCannot open file \'" << fileInStr << "\'\e[0m"
			<< std::endl;
		return (1);
	}
	std::ofstream fileOut(fileOutStr);
	while (!fileIn.eof()) {
		std::string s;
		getline(fileIn, s);
		if (replaceFrom != "")
			replace(s, replaceFrom, replaceTo);
		fileOut << s;
		if (!fileIn.eof())
			fileOut << std::endl;
	}
	return (0);
}

void replace(std::string &s, const std::string &from, const std::string &to) {
	std::size_t index;
	std::size_t	len_to;

	len_to = to.size();
	index = s.find(from);
	while (index != std::string::npos) {
		s.erase(index, from.size());
		s.insert(index, to);
		index = s.find(from, index + len_to);
	}
}
