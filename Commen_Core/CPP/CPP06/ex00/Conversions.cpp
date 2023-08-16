/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:37:20 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 08:25:53 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversions.hpp"


Conversions::Conversions()
{
  throw ("Default Constructor is Empty");
}

Conversions::Conversions(const std::string &str)
  : _str(str), _type()
  , ch(), it(), df()
{
  size_t size = _str.size();
  if (size == 0)                    throw ("\e[0mGarbage Argument !!!\e[0m");
  else if (isItChar(_str, size))    _type = isChar;
  else if (isItInt(_str, size))     _type = isInt;
  else if (isItFloat(_str, size))   _type = isFloat;
  else if (isItDouble(_str, size))  _type = isDouble;
  else                              throw ("\e[0mGarbage Argument !!!\e[0m");
  std::cout << std::setprecision(2) << std::fixed;
}

Conversions::Conversions(const Conversions &copy)
  : _str(copy._str), _type(copy._type)
  , ch(copy.ch), it(copy.it), df(copy.df)
{}

Conversions &Conversions::operator=(const Conversions &copy)
{
  _str = copy._str;
  _type = copy._type;

  ch = copy.ch;
  it = copy.it;
  df = copy.df;

  return (*this);
}

Conversions::~Conversions()
{}

void Conversions::converting()
{
  size_t size = _str.size();
  switch (_type)
    {
      case isChar:    ch = _str[(size == 1 ? 0 : 1)]; break;
      case isInt:     it = std::atol(_str.data()); break;
      case isFloat:
      case isDouble:  df = std::stof(_str.data()); break;
    }
}

void Conversions::printChar()
{
  std::cout << "Char\t: ";
  switch (_type)
    {
      case isChar:    PrintChar(ch); break;
      case isInt:     PrintChar(it); break;
      case isFloat:   PrintChar(_str, df, true); break;
      case isDouble:  PrintChar(_str, df, false); break;
    }
  std::cout << std::endl;
}

void Conversions::printInt()
{
  std::cout << "Int\t: ";
  switch (_type)
    {
      case isChar:    PrintInt(ch); break;
      case isInt:     PrintInt(it); break;
      case isFloat:   PrintInt(_str, df, true); break;
      case isDouble:  PrintInt(_str, df, false); break;
    }
  std::cout << std::endl;
}

void Conversions::printFloat()
{
  std::cout << "Float\t: ";
  switch (_type)
    {
      case isChar:    PrintFloat(ch); break;
      case isInt:     PrintFloat(it); break;
      case isFloat:   PrintFloat(_str, df, true); break;
      case isDouble:  PrintFloat(_str, df, false); break;
    }
  std::cout << std::endl;
}

void Conversions::printDouble()
{
  std::cout << "Double\t: ";
  switch (_type)
    {
      case isChar:    PrintDouble(ch); break;
      case isInt:     PrintDouble(it); break;
      case isFloat:   PrintDouble(_str, df, true); break;
      case isDouble:  PrintDouble(_str, df, false); break;
    }
  std::cout << std::endl;
}
