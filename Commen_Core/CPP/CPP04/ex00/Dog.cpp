/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:53 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:35:06 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
: Animal("Dog")
{
    std::cout << "class Dog\t\t[Default Constructor]" << std::endl;
}

Dog::Dog(const Dog &copy)
: Animal(copy._type)
{
    std::cout << "class Dog\t\t[Copy Constructor]" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    _type = copy._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "class Dog\t\t[Destructor]" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << _type << " : Bark" << std::endl;
}
