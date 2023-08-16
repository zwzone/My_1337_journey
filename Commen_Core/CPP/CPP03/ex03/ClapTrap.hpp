/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:24:33 by zwina             #+#    #+#             */
/*   Updated: 2022/09/05 16:41:47 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
    {
    protected:
        std::string _name;
        unsigned int _health;
        unsigned int _energy;
        unsigned int _damage;
    public:
        ClapTrap();
        ClapTrap(const std::string &);
        ClapTrap(const std::string &, unsigned int, unsigned int, unsigned int);
        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap &);
        ~ClapTrap();

        void attack(const std::string &);
        void takeDamage(unsigned int);
        void beRepaired(unsigned int);
    };

#endif
