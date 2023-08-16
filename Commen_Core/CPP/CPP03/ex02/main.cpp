/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:24:42 by zwina             #+#    #+#             */
/*   Updated: 2022/09/05 17:03:59 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap z("Zakaria", 100, 2, 10);
    ScavTrap r("Rob");
    FragTrap m("Mohammed");

    std::cout << std::endl;
    {
        z.attack("Mohammed");
        m.takeDamage(10);
        r.attack("Mohammed");
        m.takeDamage(20);
        z.attack("Mohammed");
        m.takeDamage(10);
        z.attack("Mohammed");
    }
    std::cout << std::endl;
    m.beRepaired(100);
    {
        m.attack("Zakaria");
        z.takeDamage(30);
        m.attack("Zakaria");
        z.takeDamage(30);
        m.attack("Zakaria");
        z.takeDamage(30);
        m.attack("Zakaria");
        z.takeDamage(30);
        m.attack("Zakaria");
        z.takeDamage(30);
    }
    std::cout << std::endl;
    m.attack("Rob");
    r.takeDamage(30);

    z.beRepaired(20);
    r.beRepaired(50);
    r.guardGate();
    m.highFivesGuys();
    std::cout << std::endl;
    return 0;
}
