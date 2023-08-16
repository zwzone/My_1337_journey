/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:25 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:43:26 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &weapon)
	: _weapon(weapon) {
		_name = name;
	}

void HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weapon.getType()
		<< std::endl;
}
