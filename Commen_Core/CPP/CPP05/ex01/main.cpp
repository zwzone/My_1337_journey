/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:12:18 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 08:46:21 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
  Bureaucrat aflaton("Aflaton", 100);
  Bureaucrat so9rat("So9rat", 60);
  Form greatestForm("GreatestForm", 50, 20);
  Form oldestForm("OldestForm", 80, 10);

  std::cout << std::endl;
  {
    std::cout << aflaton << std::endl;
    std::cout << greatestForm << std::endl;
    aflaton.signForm(greatestForm);
    aflaton.increment();
    aflaton.incrementBy(59);
    aflaton.signForm(greatestForm);
    std::cout << aflaton << std::endl;
    std::cout << greatestForm << std::endl;
  }
  std::cout << std::endl;
  {
    std::cout << so9rat << std::endl;
    std::cout << oldestForm << std::endl;
    so9rat.signForm(oldestForm);
    so9rat.decrement();
    so9rat.decrementBy(9);
    so9rat.signForm(oldestForm);
    std::cout << so9rat << std::endl;
    std::cout << oldestForm << std::endl;
  }
  std::cout << std::endl;
  return (0);
}
