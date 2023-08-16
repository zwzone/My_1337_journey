/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:38:37 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:39:41 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
    {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &);
        WrongAnimal(const std::string &);
        WrongAnimal &operator=(const WrongAnimal &);
        virtual ~WrongAnimal();

        std::string getType(void) const;
        void makeSound(void) const;
    };

#endif
