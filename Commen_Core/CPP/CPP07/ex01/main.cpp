/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:28:20 by zwina             #+#    #+#             */
/*   Updated: 2022/10/08 15:32:53 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void printIntSquared(const int &n)
{
  std::cout << n << " * " << n << " == " << n * n << std::endl;
}

void printInt(const int &n)
{
  std::cout << '|' << n << '|';
}

void printChar(const char &c)
{
  std::cout << c;
}

void printDouble(const double &d)
{
  std::cout << "[the decimal number is -> " << d << ']' << std::endl;
}

int main(void)
{
  std::cout << std::endl;

  int intArr[] = {0, 1, 3, 3, 7, 0, 4, 2, 0};

  iter(intArr, 9, printIntSquared);
  std::cout << std::endl;

  iter(intArr, 9, printInt);
  std::cout << std::endl;
  std::cout << std::endl;

  char charArr[] = "1337 is the best\n";

  iter(charArr, 17, printChar);
  std::cout << std::endl;

  double dArr[] = {0.42, 1.2, 1.423};
  iter(dArr, 3, printDouble);

  std::cout << std::endl;

  return (0);
}
