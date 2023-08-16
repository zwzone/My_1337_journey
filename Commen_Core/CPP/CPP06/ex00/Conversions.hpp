/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversions.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:37:27 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 08:10:52 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_HPP
#define CONVERSIONS_HPP

#include <iostream>
#include <iomanip>
#include <cmath>

class Conversions
  {
  private:
    enum Type
    {
      isChar,
      isInt,
      isFloat,
      isDouble
    };

    std::string _str;
    Type _type;

    unsigned char ch;
    long it;
    double df;

  public:
    Conversions();
    Conversions(const std::string &);
    Conversions(const Conversions &);
    Conversions &operator=(const Conversions &);
    ~Conversions();

    void converting();
    void printChar();
    void printInt();
    void printFloat();
    void printDouble();
  };

bool isItChar(const std::string &s, size_t &size);
bool isItInt(const std::string &s, size_t &size);
bool isItDouble(const std::string &s, size_t &size);
bool isItFloat(const std::string &s, size_t size);

void PrintChar(const unsigned char &);
void PrintChar(const long &);
void PrintChar(const std::string &, const double &, bool);

void PrintInt(const unsigned char &);
void PrintInt(const long &);
void PrintInt(const std::string &, const double &, bool);

void PrintFloat(const unsigned char &);
void PrintFloat(const long &);
void PrintFloat(const std::string &, const double &, bool);

void PrintDouble(const unsigned char &);
void PrintDouble(const long &);
void PrintDouble(const std::string &, const double &, bool);

#endif
