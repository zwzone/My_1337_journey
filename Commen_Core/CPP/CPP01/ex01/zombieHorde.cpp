/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:42:51 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:42:53 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	Zombie *zombieHorde;

	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombieHorde[i].set_name(name);
	}
	return (zombieHorde);
}
