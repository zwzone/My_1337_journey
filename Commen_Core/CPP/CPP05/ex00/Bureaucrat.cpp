/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:12:09 by zwina             #+#    #+#             */
/*   Updated: 2022/10/02 15:42:22 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
  : _name("<noName>")
  , _grade(150)
{
  std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const char *name, const int &grade)
  : _name(name)
  , _grade(grade)
{
  if (_grade < 1)
    throw (Bureaucrat::GradeTooHighException());
  if (_grade > 150)
    throw (Bureaucrat::GradeTooLowException());
  std::cout << "Bureaucrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
  : _name(copy._name)
  , _grade(copy._grade)
{
  std::cout << "Bureaucrat Copy Constructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
  _name = copy._name;
  _grade = copy._grade;
  return (*this);
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "Bureaucrat Destructor" << std::endl;
}

const std::string &Bureaucrat::getName() const
{
  return (_name);
}

const int &Bureaucrat::getGrade() const
{
  return (_grade);
}

void Bureaucrat::increment()
{
  try {
    if (_grade == 1)
      throw (Bureaucrat::GradeTooHighException());
    std::cout << "\e[38;5;81mIncrement grade of Bureaucrat \'" << _name << "\' by one\e[0m" << std::endl;
    _grade--;
  }
  catch (const std::exception &e)
  {
    std::cerr << "\e[38;5;208mBureaucrat \'" << _name << "\' caught an exception\e[0m : ";
    std::cerr << e.what() << std::endl;
  }
}

void Bureaucrat::decrement()
{
  try {
    if (_grade == 150)
      throw (Bureaucrat::GradeTooLowException());
    std::cout << "\e[38;5;81mDecrement grade of Bureaucrat \'" << _name << "\' by one\e[0m" << std::endl;
    _grade++;
  }
  catch (const std::exception &e)
  {
    std::cerr << "\e[38;5;208mBureaucrat \'" << _name << "\' caught an exception\e[0m : ";
    std::cerr << e.what() << std::endl;
  }
}

void Bureaucrat::incrementBy(const int &n)
{
  try {
    if (_grade - n < 1)
      throw (Bureaucrat::GradeTooHighException());
    std::cout << "\e[38;5;81mIncrement grade of Bureaucrat \'" << _name << "\' by " << n << "\e[0m" << std::endl;
    _grade -= n;
  }
  catch (const std::exception &e)
  {
    std::cerr << "\e[38;5;208mBureaucrat \'" << _name << "\' caught an exception\e[0m : ";
    std::cerr << e.what() << std::endl;
  }
}

void Bureaucrat::decrementBy(const int &n)
{
  try {
    if (_grade + n > 150)
      throw (Bureaucrat::GradeTooLowException());
    std::cout << "\e[38;5;81mDecrement grade of Bureaucrat \'" << _name << "\' by " << n << "\e[0m" << std::endl;
    _grade += n;
  }
  catch (const std::exception &e)
  {
    std::cerr << "\e[38;5;208mBureaucrat \'" << _name << "\' caught an exception\e[0m : ";
    std::cerr << e.what() << std::endl;
  }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return ("\e[38;5;196mGrade Too High\e[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return ("\e[38;5;196mGrade Too Low\e[0m");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &bureaucrat)
{
  out << "\e[38;5;82m\'" << bureaucrat.getName() << "\', Bureaucrat grade " << bureaucrat.getGrade() << "\e[0m";
  return (out);
}
