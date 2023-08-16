/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:37:51 by zwina             #+#    #+#             */
/*   Updated: 2022/10/06 08:37:52 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversions.hpp"

bool isItChar(const std::string &s, size_t &size)
{
  (void)s;
  if (size == 1 && !std::isdigit(s[0]))
    return (true);
  else if (size == 3 && s[0] == '\'' && s[2] == '\'')
    return (true);
  return (false);
}

bool isItInt(const std::string &s, size_t &size)
{
  for (size_t i = 0; i < size; i++)
    {
      if (i == 0 && (s[0] == '-' || s[0] == '+'))
        continue ;
      if (!std::isdigit(s[i]))
        return (false);
    }
  return (true);
}

bool isItDouble(const std::string &s, size_t &size)
{
  if  (s == "nan" || s == "+inf" || s == "-inf")
    return (true);
  size_t i = 0, j = size - 1;
  int nPoint = 0;
  if (s[0] == '-' || s[0] == '+')
    i++;
  if (!std::isdigit(s[i]) || !std::isdigit(s[j]))
    return (false);
  (i++, j--);
  while (i <= j)
    {
      if (s[i] == '.')
      {
        if (nPoint)
          return (false);
        nPoint++;
      }
      else if (!std::isdigit(s[i]))
        return (false);
      i++;
    }
  if (nPoint == 0)
    return (false);
  return (true);
}

bool isItFloat(const std::string &s, size_t size)
{
  if  (s == "nanf" || s == "+inff" || s == "-inff")
    return (true);
  if (s[size - 1] != 'f' && s[size - 1] != 'F')
    return (false);
  if (!isItDouble(s.substr(0, --size), size))
    return (false);
  return (true);
}

