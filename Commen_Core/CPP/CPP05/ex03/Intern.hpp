/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:35:36 by zwina             #+#    #+#             */
/*   Updated: 2022/09/30 15:11:57 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>

class Form;

class Intern
  {
  public:
    Intern();
    Intern(const Intern &);
    Intern &operator=(const Intern &);
    ~Intern();

    Form *makeForm(std::string name, const std::string &target) const;
  };

#endif
