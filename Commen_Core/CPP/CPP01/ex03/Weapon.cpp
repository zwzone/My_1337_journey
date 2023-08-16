/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:49 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:43:50 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) { _type = type; }

const std::string &Weapon::getType(void) const { return (_type); }

void Weapon::setType(const std::string &type) { _type = type; }
