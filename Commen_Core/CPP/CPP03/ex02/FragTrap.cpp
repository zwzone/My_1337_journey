/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:26:24 by zwina             #+#    #+#             */
/*   Updated: 2022/09/06 14:18:10 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

static void printClassName(const std::string &name)
{
    std::cout << "FragTrap " << name << ' ';
}

FragTrap::FragTrap()
: ClapTrap("<noName>", 100, 100, 30)
{
    printClassName(_name);
    std::cout << "[Default Constructor]" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
: ClapTrap(name, 100, 100, 30)
{
    printClassName(_name);
    std::cout << "[Constructor]" << std::endl;
}

FragTrap::FragTrap(const std::string &name, unsigned int health, unsigned int energy, unsigned int damage)
: ClapTrap(name, health, energy, damage)
{
    printClassName(_name);
    std::cout << "[Constructor]" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
: ClapTrap(copy._name, copy._health, copy._energy, copy._damage)
{
    printClassName(_name);
    std::cout << "[Copy Constructor]" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    _name = copy._name;
    _health = copy._health;
    _energy = copy._energy;
    _damage = copy._damage;
    return (*this);
}

FragTrap::~FragTrap()
{
    printClassName(_name);
    std::cout << "[Destructor]" << std::endl;
}

void FragTrap::attack(const std::string &name)
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

void FragTrap::highFivesGuys()
{
    printClassName(_name);
    std::cout << "sends a Positive High Fives!" << std::endl;
}
