/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:24:42 by zwina             #+#    #+#             */
/*   Updated: 2022/09/07 11:06:59 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap z("Zakaria", 100, 2, 10);
    ScavTrap r("Rob");
    FragTrap m("Mohammed");
    DiamondTrap s("Simo");

    std::cout << std::endl;
    {
        s.attack("Zakaria");
        z.takeDamage(30);
        s.attack("Rob");
        r.takeDamage(30);
        s.attack("Mohammed");
        m.takeDamage(30);
        s.guardGate();
        s.highFivesGuys();
        s.beRepaired(10);
    }
    std::cout << std::endl;
    {
        z.attack("Simo");
        s.takeDamage(10);
        z.attack("Simo");
        s.takeDamage(10);
        z.attack("Simo");
    }
    std::cout << std::endl;
    {
        r.attack("Simo");
        s.takeDamage(20);
        r.attack("Simo");
        s.takeDamage(20);
        r.attack("Simo");
        s.takeDamage(20);
    }
    std::cout << std::endl;
    {
        m.attack("Simo");
        s.takeDamage(30);
        m.attack("Simo");
        s.takeDamage(30);
        m.attack("Simo");
        s.takeDamage(30);
    }
    std::cout << std::endl;
    s.beRepaired(10000);
    s.whoAmI();
    std::cout << std::endl;
    return 0;
}
