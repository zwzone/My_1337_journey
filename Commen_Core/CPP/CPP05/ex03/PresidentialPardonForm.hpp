/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:16:00 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 09:19:43 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
  {
  private:
    std::string _target;
  public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &);
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &);
    virtual ~PresidentialPardonForm();

    virtual bool execute(Bureaucrat const &) const;
  };

#endif
