/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:08:03 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 14:40:17 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
: _type("<noType>")
{
    std::cout << "class AMateria\t\t[Default Constructor]" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
: _type(copy._type)
{
    std::cout << "class AMateria\t\t[Copy Constructor]" << std::endl;
}

AMateria::AMateria(std::string const &type)
: _type(type)
{
    std::cout << "class AMateria\t\t[String Constructor]" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    _type = copy._type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "class AMateria\t\t[Destructor]" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "<no Materia to use on "<< target.getName() << '>' << std::endl;
}
