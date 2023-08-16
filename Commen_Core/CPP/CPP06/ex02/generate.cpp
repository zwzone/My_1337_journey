/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:30:34 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 11:16:33 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
  static bool Bool = false;
  unsigned int randomNumber;

  if (!Bool)
  {
    std::srand(std::time(NULL));
    Bool = true;
  }

  randomNumber = rand() % 3;

  if (randomNumber == 0)
    return (new A());
  if (randomNumber == 1)
    return (new B());
  return (new C());
}
