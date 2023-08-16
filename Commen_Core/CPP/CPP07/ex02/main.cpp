/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:39:41 by zwina             #+#    #+#             */
/*   Updated: 2022/10/09 14:55:21 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Array.hpp"

int main(void)
{
  std::size_t size = 20;
  Array<int> iArr(size);
  for (std::size_t i = 0; i < size; i++)
    iArr[i] = i * i;
  for (std::size_t i = 0; i < size; i++)
    std::cout << "|\t" << iArr[i] << "\t|" << std::endl;

  return (0);
}
