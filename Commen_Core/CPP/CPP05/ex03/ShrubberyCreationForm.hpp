/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:15:48 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 09:19:50 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
  {
  private:
    std::string _target;
  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
    virtual ~ShrubberyCreationForm();

    virtual bool execute(Bureaucrat const &) const;
  };

#endif
