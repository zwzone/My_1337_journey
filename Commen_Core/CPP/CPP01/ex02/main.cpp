/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:43:15 by zwina             #+#    #+#             */
/*   Updated: 2022/08/25 22:43:17 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string string("HI THIS IS BRAIN");
	std::string *stringPTR(&string);
	std::string &stringREF(string);

	std::cout << "The memory address of 'string' is : " << &string << std::endl;
	std::cout << "The memory address of 'stringPTR' is : " << &stringPTR
		<< std::endl;
	std::cout << "The memory address of 'stringREF' is : " << &stringREF
		<< std::endl;

	std::cout << "The value of 'string' is : " << string << std::endl;
	std::cout << "The value pointed to by 'stringPTR' is : " << *stringPTR
		<< std::endl;
	std::cout << "The value pointed to by 'stringREF' is : " << stringREF
		<< std::endl;

	return 0;
}
