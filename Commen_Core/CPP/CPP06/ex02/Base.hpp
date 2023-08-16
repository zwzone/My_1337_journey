/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:26:43 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 10:46:54 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base
  {
  public:
    virtual ~Base();
  };

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
