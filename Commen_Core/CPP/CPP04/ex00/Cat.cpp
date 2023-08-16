/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:47 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:34:57 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
: Animal("Cat")
{
    std::cout << "class Cat\t\t[Default Constructor]" << std::endl;
}

Cat::Cat(const Cat &copy)
: Animal(copy._type)
{
    std::cout << "class Cat\t\t[Copy Constructor]" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    _type = copy._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "class Cat\t\t[Destructor]" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << _type << " : Meow" << std::endl;
}
