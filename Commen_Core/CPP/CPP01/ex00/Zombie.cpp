/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:41:58 by zwina             #+#    #+#             */
/*   Updated: 2022/08/26 23:40:56 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie::Zombie(void) { _name = "<noName>"; }

Zombie::Zombie(std::string &name) { _name = name; }

Zombie::~Zombie(void) {
	std::cout << _name << ": BraiinnzZ I'm dying, Waaaa333..."
		<< std::endl;
}

void Zombie::announce(void) {
	std::cout << _name << ": : BraiiiiiiinnnzzzZ..." << std::endl;
}
