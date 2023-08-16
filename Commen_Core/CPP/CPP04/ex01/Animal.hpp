/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:43 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:39:18 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
    {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &);
        Animal(const std::string &);
        Animal &operator=(const Animal &);
        virtual ~Animal();

        std::string getType(void) const;
        virtual void makeSound(void) const;
    };

#endif
