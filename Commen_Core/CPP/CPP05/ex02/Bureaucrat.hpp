/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:12:14 by zwina             #+#    #+#             */
/*   Updated: 2022/09/29 16:44:49 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
  {
  private:
    std::string _name;
    int _grade;

  public:
    Bureaucrat();
    Bureaucrat(const char *, const int &);
    Bureaucrat(const Bureaucrat &);
    Bureaucrat &operator=(const Bureaucrat &);
    ~Bureaucrat();

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
    const int &getGrade() const;
    void increment();
    void decrement();
    void incrementBy(const int &);
    void decrementBy(const int &);
    void signForm(Form &);
    void executeForm(const Form &) const;
  };

std::ostream& operator<<(std::ostream& out, const Bureaucrat &bureaucrat);

#endif
