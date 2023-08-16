/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:42:08 by zwina             #+#    #+#             */
/*   Updated: 2022/08/27 12:25:26 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	std::string name1 = "Balala", name2 = "Boris", name3 = "Bakala";
	Zombie zombie(name1);
	Zombie *zombiePtr;

	zombiePtr = newZombie(name2);
	zombie.announce();
	zombiePtr->announce();
	delete zombiePtr;
	randomChump(name3);
	return 0;
}
