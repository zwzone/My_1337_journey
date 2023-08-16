/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:42:07 by zwina             #+#    #+#             */
/*   Updated: 2022/09/04 08:13:40 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
    : _x(0)
    , _y(0)
{
}

Point::Point(const float x, const float y)
    : _x(x)
    , _y(y)
{
}

Point::Point(const Point &copy)
    : _x(copy._x)
    , _y(copy._y)
{
}

Point &Point::operator=(const Point &copy)
{
    (void)copy;
    return (*this);
}

Point::~Point()
{
}

Fixed   Point::getX() const
{
    return (_x);
}
Fixed   Point::getY() const
{
    return (_y);
}

float getArea(const Point &p1, const Point &p2, const Point &p3)
{
    return abs((p1.getX() - p2.getX()) * (p3.getY() - p2.getY()) - (p3.getX() - p2.getX()) * (p1.getY() - p2.getY()))/2.0;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float Area1, Area2, Area3, originalArea;

    originalArea = getArea(a, b, c);
    Area1 = getArea(a, b, point);
    Area2 = getArea(a, c, point);
    Area3 = getArea(b, c, point);
    if (originalArea < Area1 + Area2 + Area3 || Area1 == 0 || Area2 == 0 || Area3 == 0)
        return (false);
    else
        return (true);
}

std::ostream	&operator<<(std::ostream &out, const Point &point)
{
    out << '(' << point.getX() << ", " << point.getY() << ')';
    return (out);
}

