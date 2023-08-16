/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:42:34 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:42:35 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void printName(const std::string &name) { std::cout << name << ": "; }

Zombie::Zombie(void) {
	std::string name("<noName>");
	set_name(name);
}

Zombie::Zombie(std::string &name) { set_name(name); }

Zombie::~Zombie(void) {
	printName(_name);
	std::cout << "BraiinnzZ I'm dying, Waaaa333..." << std::endl;
}

void Zombie::announce(void) {
	printName(_name);
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string &name) { _name = name; }
