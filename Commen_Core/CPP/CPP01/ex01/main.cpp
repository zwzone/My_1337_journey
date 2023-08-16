/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:42:44 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:42:47 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main(void) {
	std::string name1 = "Balala", name2 = "Boris", name3 = "Bakala";
	Zombie zombie(name1);
	Zombie *zombiePtr;

	zombiePtr = zombieHorde(3, name2);
	zombie.announce();
	for (int i = 0; i < 3; i++)
		zombiePtr[i].announce();
	delete[] zombiePtr;
	return 0;
}
