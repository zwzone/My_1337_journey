/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:39 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 10:42:43 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
: _type("<AAnimal>")
{
    std::cout << "class AAnimal\t\t[Default Constructor]" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
: _type(copy._type)
{
    std::cout << "class AAnimal\t\t[Copy Constructor]" << std::endl;
}

AAnimal::AAnimal(const std::string &type)
: _type(type)
{
    std::cout << "class AAnimal\t\t[String Constructor]" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
    _type = copy._type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "class AAnimal\t\t[Destructor]" << std::endl;
}

std::string AAnimal::getType() const
{
    return (_type);
}

void AAnimal::makeSound() const
{
    std::cout << _type << " : <noSound>" << std::endl;
}
