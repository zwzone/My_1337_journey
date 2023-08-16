/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:05:33 by zwina             #+#    #+#             */
/*   Updated: 2022/09/08 11:42:18 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
    {
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string &);
        DiamondTrap(const std::string &, unsigned int, unsigned int, unsigned int);
        DiamondTrap(const DiamondTrap &);
        DiamondTrap &operator=(const DiamondTrap &);
        ~DiamondTrap();

        void attack(const std::string &);
        void whoAmI();
    };

#endif
