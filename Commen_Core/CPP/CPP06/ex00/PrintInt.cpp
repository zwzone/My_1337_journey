/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintInt.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:37:46 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 08:24:24 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>

void PrintInt(const unsigned char &ch)
{
  std::cout << static_cast<int>(ch);
}

void PrintInt(const long &it)
{
  if (!(static_cast<long>(INT_MIN) <= it && it <= static_cast<long>(INT_MAX)))
    std::cout << "Impossible";
  else
    std::cout << static_cast<int>(it);
}

void PrintInt(const std::string &str, const double &dl, bool isFloat)
{
  if (isFloat && (str == "nanf" || str == "+inff" || str == "-inff"))
    std::cout << "Impossible";
  else if (!isFloat && (str == "nan" || str == "+inf" || str == "-inf"))
    std::cout << "Impossible";
  else
  {
    if (!(static_cast<double>(INT_MIN) <= dl && dl <= static_cast<double>(INT_MAX)))
      std::cout << "Impossible";
    else
      std::cout << static_cast<int>(dl);
  }
}
