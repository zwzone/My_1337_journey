/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:08:06 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 16:14:47 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>

class ICharacter;

class AMateria
    {
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(const AMateria &);
        AMateria(std::string const &);
        AMateria &operator=(const AMateria &);
        virtual ~AMateria();

        std::string const &getType() const;
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &);
    };

#endif
