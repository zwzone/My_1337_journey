/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:42:25 by zwina             #+#    #+#             */
/*   Updated: 2022/09/04 07:23:49 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
    {
    private:
        int _fixed_point;
        static const int _n_fractional = 8;
    public:
        Fixed();
        Fixed(int const raw);
        Fixed(float const raw);
        Fixed(const Fixed &);
        ~Fixed();
        Fixed &operator=(const Fixed &);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
    };

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif
