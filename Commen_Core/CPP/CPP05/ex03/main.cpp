/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:12:18 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 09:21:11 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
  Intern formMaker;
  std::cout << std::endl;
  {
    Bureaucrat aflaton("Aflaton", 150);
    Form *plant;
    plant = formMaker.makeForm("ShrubberyCreation", "Home");
    std::cout << aflaton << std::endl;
    std::cout << *plant << std::endl;
    aflaton.signForm(*plant);
    aflaton.executeForm(*plant);
    aflaton.incrementBy(10);
    aflaton.increment();
    std::cout << aflaton << std::endl;
    std::cout << *plant << std::endl;
    aflaton.signForm(*plant);
    aflaton.executeForm(*plant);
    aflaton.incrementBy(20);
    aflaton.increment();
    std::cout << aflaton << std::endl;
    std::cout << *plant << std::endl;
    aflaton.signForm(*plant);
    aflaton.executeForm(*plant);
    std::cout << aflaton << std::endl;
    std::cout << *plant << std::endl;
    delete plant;
  }
  std::cout << std::endl;
  {
    Bureaucrat so9rat("So9rat", 10);
    Form *robot;
    robot = formMaker.makeForm("robotomy request", "BMO");
    std::cout << so9rat << std::endl;
    std::cout << *robot << std::endl;
    so9rat.signForm(*robot);
    so9rat.executeForm(*robot);
    so9rat.executeForm(*robot);
    so9rat.executeForm(*robot);
    so9rat.executeForm(*robot);
    so9rat.executeForm(*robot);
    delete robot;
  }
  std::cout << std::endl;
  {
    Bureaucrat aristo("Aristo", 3);
    Form *sorry;
    sorry = formMaker.makeForm("presidential pardon", "Students");
    std::cout << aristo << std::endl;
    std::cout << *sorry << std::endl;
    aristo.signForm(*sorry);
    aristo.signForm(*sorry);
    aristo.executeForm(*sorry);
    delete sorry;
  }
  std::cout << std::endl;
  {
    Form *none;

    none = formMaker.makeForm("Nothing", "1337");
  }
  std::cout << std::endl;
  return (0);
}
