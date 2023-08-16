/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:47:04 by zwina             #+#    #+#             */
/*   Updated: 2022/10/09 14:54:11 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
  {
  private:
    T *_array;
    std::size_t _size;
  public:
    Array();
    Array(const std::size_t &);
    Array(const Array &);
    Array &operator=(const Array &);
    T& operator[](std::size_t);
    ~Array();

    std::size_t size(void);
  };

template<typename T>
Array<T>::Array()
: _array(nullptr)
, _size(0)
{}


template<typename T>
Array<T>::Array(const std::size_t &size)
: _array(new T[size])
, _size(size)
{
  for (std::size_t i = 0; i < _size; i++)
    _array[i] = T();
}

template<typename T>
Array<T>::Array(const Array &copy)
: _array(new T[copy._size])
, _size(copy._size)
{
  for (std::size_t i = 0; i < _size; i++)
    _array[i] = copy._array[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
  if (this == &copy)
    return (*this);
  _size = copy._size;
  delete[] _array;
  _array = new T[_size];
  for (std::size_t i = 0; i < _size; i++)
    _array[i] = copy._array[i];
  return (*this);
}

template<typename T>
T& Array<T>::operator[](std::size_t index)
{
  if (index >= _size)
    throw(std::out_of_range("\e[38;5;196mOUT OF RANGE !!!\e[0m"));
  return (_array[index]);
}

template<typename T>
Array<T>::~Array()
{
  delete[] _array;
}

template<typename T>
std::size_t Array<T>::size()
{
  return (_size);
}

#endif
