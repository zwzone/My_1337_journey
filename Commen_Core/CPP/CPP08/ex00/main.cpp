/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:24:57 by zwina             #+#    #+#             */
/*   Updated: 2022/10/12 12:23:26 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

void displayIterator(std::vector<double>::iterator it, \
                     std::vector<double>::iterator end)
{
	if (it != end) std::cout << "iterator: " << *it << std::endl;
	else std::cout << "iterator reached the end of container" << std::endl;
}

int	main()
{
	std::vector<double> vect;
	std::vector<double>::iterator it;

	for (int i = 1; i < 59; i += 2)
		vect.push_back(i * 2);
	it = easyfind(vect, 43);
	displayIterator(it, vect.end());
	it = easyfind(vect, 42);
	displayIterator(it, vect.end());
  return (0);
}

