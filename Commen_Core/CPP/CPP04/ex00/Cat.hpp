/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:51 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:39:32 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
    {
    public:
        Cat();
        Cat(const Cat &);
        Cat &operator=(const Cat &);
        virtual ~Cat();

        virtual void makeSound(void) const;
    };

#endif
