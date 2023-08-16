/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintChar.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:37:39 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 08:16:38 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void PrintChar(const unsigned char &ch)
{
  if (std::isprint(ch))
    std::cout << '\'' << ch << '\'';
  else
    std::cout << "Non Displayable";
}

void PrintChar(const long &it)
{
  if (!(0l <= it && it < 256l))
    std::cout << "Impossible";
  else
    PrintChar(static_cast<unsigned char>(it));
}

void PrintChar(const std::string &str, const double &dl, bool isFloat)
{
  if (isFloat && (str == "nanf" || str == "+inff" || str == "-inff"))
    std::cout << "Impossible";
  else if (!isFloat && (str == "nan" || str == "+inf" || str == "-inf"))
    std::cout << "Impossible";
  else
  {
    if (!(0.0 <= dl && dl < 256.0))
      std::cout << "Impossible";
    else
      PrintChar(static_cast<unsigned char>(dl));
  }
}
