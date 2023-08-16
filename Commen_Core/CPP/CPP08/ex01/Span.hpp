/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:20:59 by zwina             #+#    #+#             */
/*   Updated: 2022/10/12 09:21:22 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>

enum ExpType {
  full,
  exist
};

class Span
  {
  private:
    std::size_t _maxSize;
    std::vector<int> _storage;

  public:
    Span();
    Span(std::size_t);
    Span(const Span &);
    Span &operator=(const Span &);
    int &operator[](std::size_t);
    ~Span(void);

    void addNumber(int);
    void addByIteratorRange(std::vector<int>::iterator, \
                            std::vector<int>::iterator);
    int shortestSpan() const;
    int longestSpan() const;
    std::size_t maxSize() const;
    std::size_t size() const;
    std::size_t spaceLeft() const;
  };

std::ostream &operator<<(std::ostream &, Span &);

#endif
