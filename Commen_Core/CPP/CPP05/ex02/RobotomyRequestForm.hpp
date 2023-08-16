/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:15:54 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 09:18:58 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
  {
  private:
    std::string _target;
    static bool _isSeeded;
  public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &);
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &);
    virtual ~RobotomyRequestForm();

    virtual bool execute(Bureaucrat const &) const;
  };

#endif
