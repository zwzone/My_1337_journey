/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:35:33 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 15:12:56 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cctype>

Intern::Intern()
{
  std::cout << "Intern Default Constructor" << std::endl;
}

Intern::Intern(const Intern &)
{
  std::cout << "Intern Copy Constructor" << std::endl;
}

Intern &Intern::operator=(const Intern &)
{
  return (*this);
}

Intern::~Intern()
{
  std::cout << "Intern Destructor" << std::endl;
}

Form *Intern::makeForm(std::string name, const std::string &target) const
{
  Form *form;
  int index = -1;
  std::string forms[6] = \
    {\
      std::string("shrubberycreation"), \
      std::string("robotomyrequest"), \
      std::string("presidentialpardon"), \
      std::string("shrubbery creation"), \
      std::string("robotomy request"), \
      std::string("presidential pardon")\
    };
  for (int i = 0, len = name.length(); i < len; i++)
    name[i] = std::tolower(name[i]);
  for (int i = 0; i < 6; i++)
    if (forms[i] == name) {index = i % 3; std::cout << "\e[1;38;5;136mIntern create \'" << name << "\'\e[0m"<< std::endl; break;}
  switch (index)
    {
      case 0 : form = new ShrubberyCreationForm(target); break;
      case 1 : form = new RobotomyRequestForm(target); break;
      case 2 : form = new PresidentialPardonForm(target); break;
      default : form = nullptr;
        std::cout << "\e[1;38;5;136mIntern cannot create \'" << name << "\'\e[0m" << std::endl;
    }
  return (form);
}
