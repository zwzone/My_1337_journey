/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:15:51 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 08:49:22 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

bool RobotomyRequestForm::_isSeeded = false;

RobotomyRequestForm::RobotomyRequestForm()
  : Form("RobotomyRequest", 72, 45)
  , _target("<noTarget>")
{
  std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
  : Form("RobotomyRequest", 72, 45)
  , _target(target)
{
  std::cout << "RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
  : Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec())
  , _target(copy._target)
{
  std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
  return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
  std::cout << "RobotomyRequestForm Destructor" << std::endl;
}

bool RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
  try {
    if (!canBeExecuted(executor))
      throw (GradeTooLowException());
    if (!_isSeeded)
    {
      std::srand(std::time(nullptr));
      _isSeeded = true;
    }
    int random = std::rand();
    std::cout << "\e[38;5;104m";
    if (random % 2)
      std::cout << "\\|□_□|/ \'" << _target << "\' has been robotomized successfull by " << executor.getName() << std::endl;
    else
      std::cout << "_|□.□|_ \'" << _target << "\' failed to be robotomize by " << executor.getName() << std::endl;
    std::cout << "\e[0m";
    return (true);
  }
  catch (const std::exception &e)
  {
    std::cerr << "\e[38;5;208mRobotomyRequestForm \'" << getName() << "\' caught an exception\e[0m : ";
    std::cerr << e.what() << std::endl;
    return (false);
  }
}
