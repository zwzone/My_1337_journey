/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:39 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:34:43 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
: _type("<Animal>")
{
    std::cout << "class Animal\t\t[Default Constructor]" << std::endl;
}

Animal::Animal(const Animal &copy)
: _type(copy._type)
{
    std::cout << "class Animal\t\t[Copy Constructor]" << std::endl;
}

Animal::Animal(const std::string &type)
: _type(type)
{
    std::cout << "class Animal\t\t[String Constructor]" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    _type = copy._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "class Animal\t\t[Destructor]" << std::endl;
}

std::string Animal::getType() const
{
    return (_type);
}

void Animal::makeSound() const
{
    std::cout << _type << " : <noSound>" << std::endl;
}
