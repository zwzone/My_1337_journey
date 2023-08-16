/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:47 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 10:39:20 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
: AAnimal("Cat")
, _brain(new Brain("I am a Caaat !"))
{
    std::cout << "class Cat\t\t[Default Constructor]" << std::endl;
}

Cat::Cat(const Cat &copy)
: AAnimal(copy._type)
, _brain(new Brain(*copy._brain))
{
    std::cout << "class Cat\t\t[Copy Constructor]" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    _type = copy._type;
    *_brain = *copy._brain;
    return (*this);
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "class Cat\t\t[Destructor]" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << _type << " : Meow" << std::endl;
}
