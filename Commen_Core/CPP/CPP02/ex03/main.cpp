/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:42:16 by zwina             #+#    #+#             */
/*   Updated: 2022/09/04 08:15:13 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Point   *getPoint()
{
    float x, y;

    std::cout << "\tx = ";
    std::cin >> x;
    std::cout << "\ty = ";
    std::cin >> y;
    return (new Point(x, y));
}

int main(void)
{
    Point *a;
    Point *b;
    Point *c;
    Point *pt;

    std::cout << "Point 'A':" << std::endl;
    a = getPoint();
    std::cout << "Point 'B':" << std::endl;
    b = getPoint();
    std::cout << "Point 'C':" << std::endl;
    c = getPoint();
    std::cout << "Point 'PT':" << std::endl;
    pt = getPoint();

    std::cout << "Point 'A' = " << a << std::endl;
    std::cout << "Point 'B' = " << b << std::endl;
    std::cout << "Point 'C' = " << c << std::endl;
    std::cout << "Point 'PT' = " << pt << std::endl;
    std::cout << "The point 'PT' is ";
    if (bsp(a, b, c, pt))
        std::cout << "inside";
    else
        std::cout << "outside";
    std::cout << " of the triangle 'ABC'." << std::endl;
    return (0);
} */

int main(void)
{
    Point a(2, 0);
    Point b(6, 0);
    Point c(4, 4);
    Point pt(3, 1);

    std::cout << "Point 'A' = " << a << std::endl;
    std::cout << "Point 'B' = " << b << std::endl;
    std::cout << "Point 'C' = " << c << std::endl;
    std::cout << "Point 'PT' = " << pt << std::endl;
    std::cout << "The point 'PT' is ";
    if (bsp(a, b, c, pt))
        std::cout << "inside";
    else
        std::cout << "outside";
    std::cout << " of the triangle 'ABC'." << std::endl;
    return (0);
}
