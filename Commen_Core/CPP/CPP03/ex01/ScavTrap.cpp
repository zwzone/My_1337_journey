/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:11:13 by zwina             #+#    #+#             */
/*   Updated: 2022/09/06 14:17:21 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static void printClassName(const std::string &name)
{
    std::cout << "ScavTrap " << name << ' ';
}

ScavTrap::ScavTrap()
: ClapTrap("<noName>", 100, 50, 20)
{
    printClassName(_name);
    std::cout << "[Default Constructor]" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
: ClapTrap(name, 100, 50, 20)
{
    printClassName(_name);
    std::cout << "[Constructor]" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name, unsigned int health, unsigned int energy, unsigned int damage)
: ClapTrap(name, health, energy, damage)
{
    printClassName(_name);
    std::cout << "[Constructor]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
: ClapTrap(copy._name, copy._health, copy._energy, copy._damage)
{
    printClassName(_name);
    std::cout << "[Copy Constructor]" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    _name = copy._name;
    _health = copy._health;
    _energy = copy._energy;
    _damage = copy._damage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    printClassName(_name);
    std::cout << "[Destructor]" << std::endl;
}

void ScavTrap::attack(const std::string &name)
{
    printClassName(_name);
    if (_energy > 0)
    {
        if (_damage > 0)
            std::cout << "attacks " << name << ", causing " << _damage << " points of damage!" << std::endl;
        else
            std::cout << "has no points of damage to attack " << name << std::endl;
        _energy--;
    }
    else {
        std::cout << "has no enough energy to attack!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    printClassName(_name);
    std::cout << "is now in Gate Keeper mode!" << std::endl;
}
