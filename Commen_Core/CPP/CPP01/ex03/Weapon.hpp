/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:53 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:43:54 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
	private:
		std::string _type;

	public:
		Weapon(const std::string &);
		std::string const &getType(void) const;
		void setType(const std::string &);
};

#endif
