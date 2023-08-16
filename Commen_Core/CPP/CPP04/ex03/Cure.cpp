/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:26:03 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 16:23:36 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
: AMateria("cure")
{
    std::cout << "class Cure\t\t[Default Constructor]" << std::endl;
}

Cure::Cure(const Cure &copy)
: AMateria(copy)
{
    (void)copy;
    std::cout << "class Cure\t\t[Copy Constructor]" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
    (void)copy;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "class Cure\t\t[Destructor]" << std::endl;
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
