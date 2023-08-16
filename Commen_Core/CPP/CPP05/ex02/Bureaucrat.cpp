/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:12:09 by zwina             #+#    #+#             */
/*   Updated: 2022/10/02 15:44:34 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void Bureaucrat::signForm(Form &form)
{
  if (form.getSign())
  {
    std::cout << "\e[38;5;226m";
    std::cout << "Bureaucrat \'" << _name << "\' couldn’t sign \'" << form.getName()
      << "\' because it is already signed" << std::endl;
    std::cout << "\e[0m";
    return ;
  }
  form.beSigned(*this);
  std::cout << "\e[38;5;226m";
  if (form.getSign() == true)
    std::cout << "Bureaucrat \'" << _name << "\' signed \'" << form.getName() << '\'' << std::endl;
  else
    std::cout << "Bureaucrat \'" << _name << "\' couldn’t sign \'" << form.getName()
      << "\' because his grade [" << _grade
      << "] is less than the required grade to sign it which is ["
      << form.getGradeToSign() << ']' << std::endl;
  std::cout << "\e[0m";
}

void Bureaucrat::executeForm(const Form &form) const
{
  bool isExecuted = form.execute(*this);
  std::cout << "\e[38;5;201m";
  if (isExecuted)
    std::cout << "Bureaucrat \'" << _name << "\' executed \'" << form.getName() << '\'' << std::endl;
  else
    std::cout << "Bureaucrat \'" << _name << "\' could not execute \'" << form.getName() << '\'' << std::endl;
  std::cout << "\e[0m";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
  return ("\e[38;5;196mGrade Too High\e[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return ("\e[38;5;196mGrade Too Low\e[0m");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &bureaucrat)
{
  out << "\e[38;5;82m\'" << bureaucrat.getName() << "\', Bureaucrat grade " << bureaucrat.getGrade() << "\e[0m";
  return (out);
}
