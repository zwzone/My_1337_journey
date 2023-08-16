/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:48:26 by zwina             #+#    #+#             */
/*   Updated: 2022/10/02 15:46:26 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
  {
  private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExec;

  public:
    Form();
    Form(const std::string &, const int &, const int &);
    Form(const Form &);
    Form &operator=(const Form &);
    ~Form();

    class GradeTooHighException : public std::exception
      {
      public:
        virtual const char* what() const throw();
      };

    class GradeTooLowException : public std::exception
      {
      public:
        virtual const char* what() const throw();
      };

    const std::string &getName() const;
    bool getSign() const;
    int getGradeToSign() const;
    int getGradeToExec() const;
    void beSigned(const Bureaucrat &bureaucrat);
  };

std::ostream& operator<<(std::ostream& out, const Form &form);

#endif

