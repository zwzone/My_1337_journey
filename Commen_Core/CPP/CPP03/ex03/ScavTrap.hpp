/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:11:17 by zwina             #+#    #+#             */
/*   Updated: 2022/09/07 11:09:41 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
    {
    public:
        ScavTrap();
        ScavTrap(const std::string &);
        ScavTrap(const std::string &, unsigned int, unsigned int, unsigned int);
        ScavTrap(const ScavTrap &);
        ScavTrap &operator=(const ScavTrap &);
        ~ScavTrap();

        void attack(const std::string &);
        void guardGate();
    };

#endif
