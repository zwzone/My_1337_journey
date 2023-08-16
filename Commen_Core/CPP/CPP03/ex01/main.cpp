/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:24:42 by zwina             #+#    #+#             */
/*   Updated: 2022/09/05 16:58:38 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap z("Zakaria", 100, 2, 10);
    ScavTrap r("Rob");

    std::cout << std::endl;
    z.attack("Rob");
    r.takeDamage(10);
    z.attack("Rob");
    r.takeDamage(10);
    z.attack("Rob");
    r.beRepaired(100);
    r.attack("Rob");
    z.takeDamage(20);
    r.guardGate();
    std::cout << std::endl;
    return 0;
}
