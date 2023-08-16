/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:26:00 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 12:00:55 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
    {
    public:
        Ice();
        Ice(const Ice &);
        Ice &operator=(const Ice &);
        ~Ice();

        virtual AMateria *clone() const;
        virtual void use(ICharacter &);
    };

#endif
