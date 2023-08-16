/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:45:27 by zwina             #+#    #+#             */
/*   Updated: 2022/09/04 07:23:50 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

//////////Constructors//////////

Fixed::Fixed()
: _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(int const raw)
: _fixed_point(raw << _n_fractional)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const raw)
: _fixed_point(roundf(raw * (1 << _n_fractional)))
{
    std::cout << "Float constructor called" << std::endl;
}

//////////Destructor//////////

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

//////////Operator Overloading//////////

Fixed	&Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixed_point = copy._fixed_point;
    return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

//////////Memeber Functions//////////

int	Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixed_point = raw;
}

float	Fixed::toFloat(void) const
{
    return (static_cast<float>(_fixed_point) / (1 << _n_fractional));
}

int	Fixed::toInt(void) const
{
    return (_fixed_point >> _n_fractional);
}
