/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:15:57 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 08:49:14 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
  : Form("PresidentialPardon", 25, 5)
  , _target("<noTarget>")
{
  std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
  : Form("PresidentialPardon", 25, 5)
  , _target(target)
{
  std::cout << "PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
  : Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec())
  , _target(copy._target)
{
  std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &)
{
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
  std::cout << "PresidentialPardonForm Destructor" << std::endl;
}

bool PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
  try {
    std::cout << "\e[38;5;247m\'" << executor.getName() << "\' Informs that \'"
      << _target
      << "\' has been pardoned by Zaphod Beeblebrox\e[0m" << std::endl;
    return (true);
  }
  catch (const std::exception &e)
  {
    std::cerr << "\e[38;5;208mPresidentialPardonForm \'" << getName() << "\' caught an exception\e[0m : ";
    std::cerr << e.what() << std::endl;
    return (false);
  }
}
