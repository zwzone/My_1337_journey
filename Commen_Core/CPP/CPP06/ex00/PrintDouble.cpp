/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintDouble.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:35:57 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 08:21:52 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>

void PrintDouble(const unsigned char &ch)
{
  std::cout << static_cast<double>(ch);
}

void PrintDouble(const long &it)
{
  std::cout << static_cast<double>(it);
}

void PrintDouble(const std::string &str, const double &df, bool isFloat)
{
  if (isFloat && (str == "nanf" || str == "+inff" || str == "-inff"))
    std::cout << str.substr(0, str.size() - 1);
  else if (!isFloat && (str == "nan" || str == "+inf" || str == "-inf"))
    std::cout << str;
  else
  {
    std::cout << df;
  }
}
