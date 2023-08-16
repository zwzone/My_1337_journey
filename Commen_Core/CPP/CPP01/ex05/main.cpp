/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:44:52 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:44:53 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl Myharl;

	Myharl.complain("debug");
	Myharl.complain("none");
	Myharl.complain("warning");
	Myharl.complain("info");
	Myharl.complain("error");
	return 0;
}
