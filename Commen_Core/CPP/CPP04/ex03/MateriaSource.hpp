/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:59:17 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 16:13:25 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
    {
    private:
        AMateria *_materias[4];
        int _index;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &);
        MateriaSource &operator=(const MateriaSource &);
        ~MateriaSource();

        virtual void learnMateria(AMateria *);
        virtual AMateria *createMateria(std::string const &);
    };

#endif
