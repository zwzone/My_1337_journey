/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:12:18 by zwina             #+#    #+#             */
/*   Updated: 2022/09/29 19:20:05 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
  std::cout << std::endl;
  {
    Bureaucrat aflaton("Aflaton", 150);
    ShrubberyCreationForm plant("Home");
    std::cout << aflaton << std::endl;
    std::cout << plant << std::endl;
    aflaton.signForm(plant);
    aflaton.executeForm(plant);
    aflaton.incrementBy(10);
    aflaton.increment();
    std::cout << aflaton << std::endl;
    std::cout << plant << std::endl;
    aflaton.signForm(plant);
    aflaton.executeForm(plant);
    aflaton.incrementBy(20);
    aflaton.increment();
    std::cout << aflaton << std::endl;
    std::cout << plant << std::endl;
    aflaton.signForm(plant);
    aflaton.executeForm(plant);
    std::cout << aflaton << std::endl;
    std::cout << plant << std::endl;
  }
  std::cout << std::endl;
  {
    Bureaucrat so9rat("So9rat", 10);
    RobotomyRequestForm robot("BMO");
    std::cout << so9rat << std::endl;
    std::cout << robot << std::endl;
    so9rat.signForm(robot);
    so9rat.executeForm(robot);
    so9rat.executeForm(robot);
    so9rat.executeForm(robot);
    so9rat.executeForm(robot);
    so9rat.executeForm(robot);
  }
  std::cout << std::endl;
  {
    Bureaucrat aristo("Aristo", 3);
    PresidentialPardonForm sorry("Students");
    std::cout << aristo << std::endl;
    std::cout << sorry << std::endl;
    aristo.signForm(sorry);
    aristo.signForm(sorry);
    aristo.executeForm(sorry);
  }
  std::cout << std::endl;
  return (0);
}
