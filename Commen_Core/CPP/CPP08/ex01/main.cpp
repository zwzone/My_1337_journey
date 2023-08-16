/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:48:25 by zwina             #+#    #+#             */
/*   Updated: 2022/10/10 10:09:12 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
  Span sp = Span(5);
  std::vector<int> v;
  v.push_back(17);
  v.push_back(9);
  v.push_back(11);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addByIteratorRange(v.begin(), v.end());
  std::cout << sp << std::endl;
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
  return 0;
}
