/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:38:32 by zwina             #+#    #+#             */
/*   Updated: 2022/09/16 10:39:46 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
    {
    public:
        WrongCat();
        WrongCat(const WrongCat &);
        WrongCat &operator=(const WrongCat &);
        virtual ~WrongCat();

        void makeSound(void) const;
    };

#endif
