/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:31:10 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 11:13:05 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p)
{
  if (A *a = dynamic_cast<A*>(p))
    std::cout << 'A';
  else if (B *b = dynamic_cast<B*>(p))
    std::cout << 'B';
  else if (C *c = dynamic_cast<C*>(p))
    std::cout << 'C';
  else
    std::cout << "<UnknownPtr>";
}

void identify(Base& p)
{

  try {

    Base &derived = dynamic_cast<A&>(p);
    (void)derived;
    std::cout << 'A';

  } catch (...) {

    try {

      Base &derived = dynamic_cast<B&>(p);
      (void)derived;
      std::cout << 'B';

    } catch (...) {

      try {

        Base &derived = dynamic_cast<C&>(p);
        (void)derived;
        std::cout << 'C';

      } catch (...) {

        std::cout << "<UnknownRef>";

      }

    }

  }

}
