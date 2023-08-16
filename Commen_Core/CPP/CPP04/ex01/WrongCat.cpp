/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:38:30 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:36:12 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
    std::cout << "class WrongCat\t\t[Default Constructor]" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
: WrongAnimal(copy._type)
{
    std::cout << "class WrongCat\t\t[Copy Constructor]" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    _type = copy._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "class WrongCat\t\t[Destructor]" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << _type << " : Meow" << std::endl;
}
