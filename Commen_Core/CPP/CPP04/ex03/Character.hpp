/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:03:29 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 15:30:38 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
    {
    private:
        std::string _name;
        AMateria *_inventory[4];
    public:
        Character();
        Character(const Character &);
        Character(const std::string &);
        Character &operator=(const Character &);
        ~Character();

        virtual std::string const &getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
    };

#endif
