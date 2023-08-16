/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintFloat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:35:35 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 09:06:24 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <float.h>

void PrintFloat(const unsigned char &ch)
{
  std::cout << static_cast<double>(ch) << 'f';
}

void PrintFloat(const long &it)
{
  std::cout << static_cast<double>(it) << 'f';
}

void PrintFloat(const std::string &str, const double &df, bool isFloat)
{
  if (isFloat && (str == "nanf" || str == "+inff" || str == "-inff"))
    std::cout << str;
  else if (!isFloat && (str == "nan" || str == "+inf" || str == "-inf"))
    std::cout << str << 'f';
  else
  {
    if (isFloat)
      std::cout << df << 'f';
    else
    {
      if (!(static_cast<double>(-FLT_MAX) < df && df < static_cast<double>(FLT_MAX)))
        std::cout << "Impossible";
      else
        std::cout << df << 'f';
    }
  }
}
