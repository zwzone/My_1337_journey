/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:36:13 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 17:27:05 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
  T c;
  c = a;
  a = b;
  b = c;
}

template<typename T>
T max(const T &a, const T &b)
{
  if (a > b)
    return (a);
  return (b);
}

template<typename T>
T min(const T &a, const T &b)
{
  if (a < b)
    return (a);
  return (b);
}


#endif
