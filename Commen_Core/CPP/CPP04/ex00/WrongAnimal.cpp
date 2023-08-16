/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:38:34 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:35:20 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: _type("<WrongAnimal>")
{
    std::cout << "class WrongAnimal\t[Default Constructor]" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
: _type(copy._type)
{
    std::cout << "class WrongAnimal\t[Copy Constructor]" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
: _type(type)
{
    std::cout << "class WrongAnimal\t[String Constructor]" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    _type = copy._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "class WrongAnimal\t[Destructor]" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << _type << " : <noSound>" << std::endl;
}
