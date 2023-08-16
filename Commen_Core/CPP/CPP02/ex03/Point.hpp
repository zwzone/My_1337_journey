/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:41:59 by zwina             #+#    #+#             */
/*   Updated: 2022/09/04 07:43:08 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
    {
    private:
        const Fixed _x;
        const Fixed _y;
    public:
        Point();
        Point(const float, const float);
        Point(const Point &);
        Point &operator=(const Point &);
        ~Point();
        Fixed getX() const;
        Fixed getY() const;
    };

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream	&operator<<(std::ostream &out, const Point &point);

#endif
