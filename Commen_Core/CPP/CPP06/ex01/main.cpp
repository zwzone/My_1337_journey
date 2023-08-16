/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:20:32 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 14:29:41 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
  Data *data = new Data("Zakaria", "1337");
  uintptr_t uPtr;

  std::cout << *data << std::endl;

  std::cout << "serializing ..." << std::endl;
  uPtr = serialize(data);

  data = nullptr;
  std::cout << "<FromUnitptr_t>   " << *reinterpret_cast<Data*>(uPtr) << "   </FromUnitptr_t>" << std::endl;

  std::cout << "deserializing ..." << std::endl;
  data = deserialize(uPtr);

  std::cout << *data << std::endl;

  delete data;
  return (0);
}
