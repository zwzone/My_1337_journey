/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:59:18 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 16:22:33 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
: _index(0)
{
    for (size_t i = 0; i < 4; i++)
        _materias[i] = nullptr;
    std::cout << "class MateriaSource\t[Default Constructor]" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
    std::cout << "class MateriaSource\t[Copy Constructor]" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    _index = copy._index;

    for (size_t i = 0; i < 4; i++)
        {
            if (_materias[i])
                delete _materias[i];
            if (copy._materias[i] == nullptr)
                _materias[i] = nullptr;
            else
                _materias[i] = copy._materias[i]->clone();
        }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
        if (_materias[i])
            delete _materias[i];
    std::cout << "class MateriaSource\t[Destructor]" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (_materias[_index])
        delete _materias[_index];
    _materias[_index] = m;
    _index++;
    if (_index == 4)
        _index = 0;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (size_t i = 0; i < 4; i++)
        if (_materias[i] && _materias[i]->getType() == type)
            return (_materias[i]->clone());
    std::cout << "<Cannot create Materia " << type << ">" << std::endl;
    return (nullptr);
}
