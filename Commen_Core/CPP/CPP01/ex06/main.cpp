/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:45:23 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:45:24 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "\e[31mWrong Number Of Arguments !\e[0m" << std::endl;
		return (1);
	}
	Harl harlFilter;
	std::string level(av[1]);
	std::size_t len(level.size());
	for (std::size_t i = 0; i < len; i++) {
		level[i] = std::toupper(level[i]);
	}
	harlFilter.complain(level);
	return 0;
}
