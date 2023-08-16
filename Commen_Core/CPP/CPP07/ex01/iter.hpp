/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:28:22 by zwina             #+#    #+#             */
/*   Updated: 2022/10/08 10:53:49 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T>
void iter(const T *a, const std::size_t length, void (*f)(const T &))
{
  for (std::size_t i = 0; i < length; i++)
    f(a[i]);
}

#endif
