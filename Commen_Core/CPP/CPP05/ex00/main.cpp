/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:12:18 by zwina             #+#    #+#             */
/*   Updated: 2022/09/29 14:00:23 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
  Bureaucrat aflaton("Aflaton", 5);
  Bureaucrat so9rat("So9rat", 140);

  std::cout << std::endl;
  {
    std::cout << aflaton << std::endl;
    aflaton.incrementBy(3);
    std::cout << aflaton << std::endl;
    aflaton.increment();
    std::cout << aflaton << std::endl;
    aflaton.incrementBy(3);
    std::cout << aflaton << std::endl;
  }
  std::cout << std::endl;
  {
    std::cout << so9rat << std::endl;
    so9rat.decrementBy(6);
    std::cout << so9rat << std::endl;
    so9rat.decrement();
    std::cout << so9rat << std::endl;
    so9rat.decrementBy(6);
    std::cout << so9rat << std::endl;
  }
  std::cout << std::endl;
  return (0);
}
