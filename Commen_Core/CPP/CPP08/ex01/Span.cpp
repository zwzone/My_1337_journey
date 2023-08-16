/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:48:28 by zwina             #+#    #+#             */
/*   Updated: 2022/10/11 12:04:36 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
# include <algorithm>

Span::Span()
  : _maxSize(0)
  , _storage(std::vector<int>())
{}

Span::Span(std::size_t maxSize)
  : _maxSize(maxSize)
  , _storage(std::vector<int>())
{}


Span::Span(const Span &copy)
  : _maxSize(copy._maxSize)
  , _storage(copy._storage)
{}

Span &Span::operator=(const Span &copy)
{
  _maxSize = copy._maxSize;
  _storage = copy._storage;
  return (*this);
}

int &Span::operator[](std::size_t index)
{
  if (index >= size())
    throw (std::out_of_range("\e[38;5;196mOut of Range !!!\e[0m"));
  return (_storage[index]);
}

Span::~Span() {}

void Span::addNumber(int number)
{
  if (_storage.size() == _maxSize)
    throw (std::out_of_range("\e[38;5;196mThe Span is FULL !!!\e[0m"));

  _storage.push_back(number);
}

void Span::addByIteratorRange(std::vector<int>::iterator b, \
                              std::vector<int>::iterator e)
{
  std::vector<int> tmp(b, e);

  if (tmp.size() > spaceLeft())
    throw (std::out_of_range("\e[38;5;196mThe Span cannot hold All those numbers !!!\e[0m"));

  copy(tmp.begin(), tmp.end(), std::back_inserter(_storage));
}

int Span::shortestSpan() const
{
  int result;
  std::vector<int> tmp(_storage);
  std::vector<int>::iterator it;

  if (_storage.size() < 2)
    throw (std::logic_error("\e[38;5;196mThere is NO Span !!!\e[0m"));

  std::sort(tmp.begin(), tmp.end());
  result = *(tmp.begin() + 1) - *tmp.begin();
  if (_maxSize == 2)
    return (result);
  for (it = tmp.begin() + 1; it != tmp.end() - 1 && result != 0; it++)
    {
      int current = *(it + 1) - *it;
      if (current < result) result = current;
    }
  return (result);
}

int Span::longestSpan() const
{
  std::vector<int> tmp(_storage);

  if (_storage.size() < 2)
    throw (std::logic_error("\e[38;5;196mThere is NO Span !!!\e[0m"));

  std::sort(tmp.begin(), tmp.end());
  return (*(tmp.end() - 1) - *tmp.begin());
}

std::size_t Span::maxSize() const { return (_maxSize); }

std::size_t Span::size() const { return (_storage.size()); }

std::size_t Span::spaceLeft() const { return (_maxSize - _storage.size()); }

std::ostream &operator<<(std::ostream &out, Span &span)
{
  out << "[ Span : ";
  for (std::size_t i = 0, size = span.size(); i < size; i++)
    {
      if (i) out << '|';
      out << span[i];
    }
  out << " ]";
  return (out);
}
