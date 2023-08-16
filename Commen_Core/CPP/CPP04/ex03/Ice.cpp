/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:25:58 by zwina             #+#    #+#             */
/*   Updated: 2022/09/18 11:02:06 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
: AMateria("ice")
{
    std::cout << "class Ice\t\t[Default Constructor]" << std::endl;
}

Ice::Ice(const Ice &copy)
: AMateria(copy)
{
    (void)copy;
    std::cout << "class Ice\t\t[Copy Constructor]" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
    (void)copy;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "class Ice\t\t[Destructor]" << std::endl;
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
