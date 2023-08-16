/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:53 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 10:34:49 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
: Animal("Dog")
, _brain(new Brain("I am a Dooog !"))
{
    std::cout << "class Dog\t\t[Default Constructor]" << std::endl;
}

Dog::Dog(const Dog &copy)
: Animal(copy._type)
, _brain(new Brain(*copy._brain))
{
    std::cout << "class Dog\t\t[Copy Constructor]" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    _type = copy._type;
    *_brain = *copy._brain;
    return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "class Dog\t\t[Destructor]" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << _type << " : Bark" << std::endl;
}
