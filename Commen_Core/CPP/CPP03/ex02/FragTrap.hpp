/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:26:27 by zwina             #+#    #+#             */
/*   Updated: 2022/09/06 14:18:09 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
    {
    public:
        FragTrap();
        FragTrap(const std::string &);
        FragTrap(const std::string &, unsigned int, unsigned int, unsigned int);
        FragTrap(const FragTrap &);
        FragTrap &operator=(const FragTrap &);
        ~FragTrap();

        void attack(const std::string &);
        void highFivesGuys();
    };

#endif
