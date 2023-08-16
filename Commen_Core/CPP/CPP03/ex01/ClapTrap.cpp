/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:24:31 by zwina             #+#    #+#             */
/*   Updated: 2022/09/05 17:01:30 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static void printClassName(const std::string &name)
{
    std::cout << "ClapTrap " << name << ' ';
}

ClapTrap::ClapTrap()
    : _name("<noName>")
    , _health(10)
    , _energy(10)
    , _damage(0)
{
    printClassName(_name);
    std::cout << "[Default Constructor]" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name)
    , _health(10)
    , _energy(10)
    , _damage(0)
{
    printClassName(_name);
    std::cout << "[Constructor]" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, unsigned int health, unsigned int energy, unsigned int damage)
    : _name(name)
    , _health(health)
    , _energy(energy)
    , _damage(damage)
{
    printClassName(_name);
    std::cout << "[Constructor]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
    : _name(copy._name)
    , _health(copy._health)
    , _energy(copy._energy)
    , _damage(copy._damage)
{
    printClassName(_name);
    std::cout << "[Copy Constructor]" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    _name = copy._name;
    _health = copy._health;
    _energy = copy._energy;
    _damage = copy._damage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    printClassName(_name);
    std::cout << "[Destructor]" << std::endl;
}

void ClapTrap::attack(const std::string &name)
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

void ClapTrap::takeDamage(unsigned int amount)
{
    printClassName(_name);
    if (_health > 0)
    {
        std::cout << "take " << amount << " of damage!" << std::endl;
        if (_health >= amount)
            _health -= amount;
        else
            _health = 0;
    }
    else {
        std::cout << "was died, he cannot take anymore damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    printClassName(_name);
    if (_energy > 0)
    {
        std::cout << "repaired " << amount << " of health!" << std::endl;
        _health += amount;
        _energy--;
    }
    else {
        std::cout << "has no enough energy to repaire!" << std::endl;
    }
}
