/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:05:29 by zwina             #+#    #+#             */
/*   Updated: 2022/09/10 14:15:14 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

static void printClassName(const std::string &name)
{
    std::cout << "DiamondTrap " << name << ' ';
}

DiamondTrap::DiamondTrap()
: ClapTrap("<noName>_clap_name", 100, 50, 30)
, _name("<noName>")
{
    printClassName(_name);
    std::cout << "[Default Constructor]" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
: ClapTrap(name + "_clap_name", 100, 50, 30)
, _name(name)
{
    printClassName(_name);
    std::cout << "[Constructor]" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name, unsigned int health, unsigned int energy, unsigned int damage)
: ClapTrap(name + "_clap_name", health, energy, damage)
, _name(name)
{
    printClassName(_name);
    std::cout << "[Constructor]" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
: ClapTrap(copy._name, copy._health, copy._energy, copy._damage)
, _name(copy._name)
{
    printClassName(_name);
    std::cout << "[Copy Constructor]" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    _name = copy._name;
    _health = copy._health;
    _energy = copy._energy;
    _damage = copy._damage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    printClassName(_name);
    std::cout << "[Destructor]" << std::endl;
}

void DiamondTrap::attack(const std::string &name)
{
    ScavTrap::attack(name);
}

void DiamondTrap::whoAmI()
{
    printClassName(_name);
    std::cout << "| ClapTrap " << ClapTrap::_name << ", I have two names, That's why I'm stronger!" << std::endl;
}
