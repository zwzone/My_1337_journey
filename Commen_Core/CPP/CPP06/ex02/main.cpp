/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:47:42 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 14:30:49 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
  for (int i = 0; i < 20; i++)
    {
      std::cout << " | ";

      std::cout << "[With Pointers] ";
      Base *p = generate();
      identify(p);

      std::cout << "\t| ";

      std::cout << "[With Reference] ";
      C c;
      Base &r = c;
      identify(r);

      std::cout << "\t| ";

      std::cout << std::endl;
    }
  return (0);
}
