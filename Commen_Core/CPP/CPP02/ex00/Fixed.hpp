/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:42:25 by zwina             #+#    #+#             */
/*   Updated: 2022/09/04 07:22:59 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed 
    {
    private:
        int _fixed_point;
        static const int _n_fractional = 8;
    public:
        Fixed();
        Fixed(const Fixed &);
        ~Fixed();
        Fixed &operator=(const Fixed &);
        int getRawBits(void) const;
        void setRawBits(int const raw);
    };

#endif
