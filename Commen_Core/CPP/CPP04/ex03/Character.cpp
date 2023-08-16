/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:03:28 by zwina             #+#    #+#             */
/*   Updated: 2022/09/20 17:32:10 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
: _name("<noName>")
{
    for (size_t i = 0; i < 4; i++)
        _inventory[i] = nullptr;
    std::cout << "class Character\t\t[Default Constructor]" << std::endl;
}

Character::Character(const Character &copy)
{
    *this = copy;
    std::cout << "class Character\t\t[Copy Constructor]" << std::endl;
}

Character::Character(const std::string &name)
: _name(name)
{
    for (size_t i = 0; i < 4; i++)
        _inventory[i] = nullptr;
    std::cout << "class Character\t\t[String Constructor]" << std::endl;
}

Character &Character::operator=(const Character &copy)
{
    _name = copy._name;
    for (size_t i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            if (copy._inventory[i] == nullptr)
                _inventory[i] = nullptr;
            else
                _inventory[i] = copy._inventory[i]->clone();
        }
    return (*this);
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
        if (_inventory[i])
            delete _inventory[i];
    std::cout << "class Character\t\t[Destructor]" << std::endl;
}

std::string const &Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    for (size_t i = 0; i < 4; i++)
        {
            if (_inventory[i] == nullptr)
            {
                _inventory[i] = m;
                return ;
            }
        }
}

void Character::unequip(int idx)
{
    _inventory[idx % 4] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
    if (_inventory[idx % 4] == nullptr)
        std::cout << "<inventory slot is empty at index " << idx % 4 << '>' << std::endl;
    else
        _inventory[idx % 4]->use(target);
}
