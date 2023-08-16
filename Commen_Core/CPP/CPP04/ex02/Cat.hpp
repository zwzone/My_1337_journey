/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:37:51 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 10:41:58 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
    {
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &);
        Cat &operator=(const Cat &);
        virtual ~Cat();

        virtual void makeSound(void) const;
    };

#endif
