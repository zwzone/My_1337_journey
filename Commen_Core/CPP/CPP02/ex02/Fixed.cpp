/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:45:43 by zwina             #+#    #+#             */
/*   Updated: 2022/09/04 07:24:34 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//////////Constructors//////////

Fixed::Fixed()
: _fixed_point(0)
{
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed::Fixed(int const raw)
: _fixed_point(raw << _n_fractional)
{
}

Fixed::Fixed(float const raw)
: _fixed_point(roundf(raw * (1 << _n_fractional)))
{
}

//////////Destructor//////////

Fixed::~Fixed(void)
{
}

//////////Operator Overloading//////////

Fixed	&Fixed::operator=(const Fixed &copy)
{
    _fixed_point = copy._fixed_point;
    return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

bool	Fixed::operator>(const Fixed &fixed) const
{
    return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed) const
{
    return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed) const
{
    return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
    return ((*this > fixed) && (*this == fixed));
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
    return ((*this < fixed) && (*this == fixed));
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
    return (!(*this == fixed));
}

float	Fixed::operator+(const Fixed &fixed) const
{
    return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(const Fixed &fixed) const
{
    return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(const Fixed &fixed) const
{
    return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(const Fixed &fixed) const
{
    return (this->toFloat() / fixed.toFloat());
}

Fixed	&Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed	&Fixed::operator--()
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

Fixed	Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(*this);
    return (tmp);
}

Fixed	Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(*this);
    return (tmp);
}



//////////Memeber Functions//////////

int	Fixed::getRawBits(void) const
{
    return (_fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    return ((fixed1 < fixed2) ? fixed1 : fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    return ((fixed1 > fixed2) ? fixed1 : fixed2);
}

const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
    return ((fixed1 < fixed2) ? fixed1 : fixed2);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
    return ((fixed1 > fixed2) ? fixed1 : fixed2);
}
