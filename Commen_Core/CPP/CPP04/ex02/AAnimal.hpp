/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:43 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 10:38:04 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class AAnimal
    {
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const AAnimal &);
        AAnimal(const std::string &);
        AAnimal &operator=(const AAnimal &);
        virtual ~AAnimal();

        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
    };

#endif
