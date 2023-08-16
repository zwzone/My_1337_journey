/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:26:05 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 14:41:40 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
    {
    public:
        Cure();
        Cure(const Cure &);
        Cure &operator=(const Cure &);
        ~Cure();

        virtual AMateria *clone() const;
        virtual void use(ICharacter &);
    };

#endif
