/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:31 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:43:32 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
	private:
		const Weapon &_weapon;
		std::string _name;

	public:
		HumanA(const std::string &, const Weapon &);
		void attack(void) const;
};

#endif
