/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:48:23 by zwina             #+#    #+#             */
/*   Updated: 2022/10/02 15:48:15 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
  : _name("<noName>")
  , _isSigned(false)
  , _gradeToSign(150)
  , _gradeToExec(150)
{
  std::cout << "Form Default Constructor" << std::endl;
}

Form::Form(const std::string &name, const int &gradeToSign, const int &gradeToExec)
  : _name(name)
  , _isSigned(false)
  , _gradeToSign(gradeToSign)
  , _gradeToExec(gradeToExec)
{
  if (_gradeToSign < 1)
    throw (Form::GradeTooHighException());
  if (_gradeToSign > 150)
    throw (Form::GradeTooLowException());
  if (_gradeToExec < 1)
    throw (Form::GradeTooHighException());
  if (_gradeToExec > 150)
    throw (Form::GradeTooLowException());
  std::cout << "Form Constructor" << std::endl;
}

Form::Form(const Form &copy)
  : _name(copy._name)
  , _isSigned(false)
  , _gradeToSign(copy._gradeToSign)
  , _gradeToExec(copy._gradeToExec)
{
  std::cout << "Form Copy Constructor" << std::endl;
}

Form &Form::operator=(const Form &)
{
  return (*this);
}

Form::~Form()
{
  std::cout << "Form Destructor" << std::endl;
}

const std::string &Form::getName() const
{
  return (_name);
}

bool Form::getSign() const
{
  return (_isSigned);
}

int Form::getGradeToSign() const
{
  return (_gradeToSign);
}

int Form::getGradeToExec() const
{
  return (_gradeToExec);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
  try {
    if (bureaucrat.getGrade() > _gradeToSign)
      throw (Form::GradeTooLowException());
    _isSigned = true;
  }
  catch (const std::exception &e)
  {
    std::cerr << "\e[38;5;208mForm \'" << _name << "\' caught an exception\e[0m : ";
    std::cerr << e.what() << std::endl;
  }
}

bool Form::canBeExecuted(const Bureaucrat &executor) const
{
  return ((_isSigned && executor.getGrade() <= _gradeToExec));
}

const char* Form::GradeTooHighException::what() const throw()
{
  return ("\e[38;5;196mGrade Too High\e[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
  return ("\e[38;5;196mGrade Too Low\e[0m");
}

std::ostream& operator<<(std::ostream& out, const Form &form)
{
  out << "\e[38;5;82mForm \'" << form.getName() << "\', \e[38;5;34m{ Signed : ";
  form.getSign() == true ? out << "Yes" : out << "No";
  out << ", gradeToSign : " << form.getGradeToSign();
  out << ", gradeToExecute : " << form.getGradeToExec() << " }\e[0m";
  return (out);
}
