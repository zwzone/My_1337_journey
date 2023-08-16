/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:37:57 by zwina             #+#    #+#             */
/*   Updated: 2022/10/06 08:37:58 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversions.hpp"

int main (int argc, char *argv[])
{
  try {
    if (argc != 2)
      throw("\e[0mWrong Number Of Arguments !\e[0m");
    Conversions convert(argv[1]);
    convert.converting();
    convert.printChar();
    convert.printInt();
    convert.printFloat();
    convert.printDouble();
  }
  catch (char const *str)
  {
    std::cerr << str << std::endl;
    return (1);
  }
  return (0);
}
