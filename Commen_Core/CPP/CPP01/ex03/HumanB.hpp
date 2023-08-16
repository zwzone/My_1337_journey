/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:40 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:43:41 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
	private:
		const Weapon *_weapon;
		std::string _name;

	public:
		HumanB(const std::string &);
		void attack(void);
		void setWeapon(const Weapon &);
};

#endif
