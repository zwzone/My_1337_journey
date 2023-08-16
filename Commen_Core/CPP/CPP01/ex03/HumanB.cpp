/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:36 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:43:37 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) {
	_name = name;
	_weapon = NULL;
}

void HumanB::attack(void) {
	if (_weapon)
		std::cout << _name << " attacks with their " << (*_weapon).getType()
			<< std::endl;
	else
		std::cout << _name << " has no weapon to attack with" << std::endl;
}

void HumanB::setWeapon(const Weapon &weapon) { _weapon = &weapon; }
