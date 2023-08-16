/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:55 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:39:36 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
    {
    public:
        Dog();
        Dog(const Dog &);
        Dog &operator=(const Dog &);
        virtual ~Dog();

        virtual void makeSound(void) const;
    };

#endif
