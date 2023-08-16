/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:24:42 by zwina             #+#    #+#             */
/*   Updated: 2022/09/05 16:58:10 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap z("Zakaria", 100, 2, 10);
    ClapTrap m("Mohammed");

    std::cout << std::endl;
    z.attack("Mohammed");
    m.takeDamage(10);
    z.attack("Mohammed");
    m.takeDamage(10);
    z.attack("Mohammed");
    m.beRepaired(100);
    m.attack("Zakaria");
    std::cout << std::endl;
    return 0;
}
