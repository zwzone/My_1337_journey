/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:15:46 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 08:53:49 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
  : Form("ShrubberyCreation", 145, 137)
  , _target("<noTarget>")
{
  std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
  : Form("ShrubberyCreation", 145, 137)
  , _target(target)
{
  std::cout << "ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
  : Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec())
  , _target(copy._target)
{
  std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
  return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}

bool ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
  try {
    if (!canBeExecuted(executor))
      throw (GradeTooLowException());
    std::string filename(_target + "_shrubbery");
    std::ofstream file(filename);
    file  << "\n               ,@@@@@@@,\n"
      << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
      << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
      << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
      << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
      << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
      << "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
      << "       |o|        | |         | |\n"
      << "       |.|        | |         | |\n"
      << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n"
      << std::endl
      << "Created by \'" << executor.getName() << '\'' << std::endl;
    return (true);
  }
  catch (const std::exception &e)
  {
    std::cerr << "\e[38;5;208mShrubberyCreationForm \'" << getName() << "\' caught an exception\e[0m : ";
    std::cerr << e.what() << std::endl;
    return (false);
  }
}
