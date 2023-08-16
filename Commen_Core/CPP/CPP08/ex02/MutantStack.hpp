/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:42:05 by zwina             #+#    #+#             */
/*   Updated: 2022/10/11 12:03:52 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
  {
  public:

    MutantStack();
    MutantStack(const MutantStack<T> &);
    MutantStack &operator=(const MutantStack &);
    ~MutantStack();

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin();
    iterator end();
  };

template<typename T>
MutantStack<T>::MutantStack()
{}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy)
{ *this = copy; }

template<typename T>
MutantStack<T>::~MutantStack()
{}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &copy)
{ this->c = copy.c; return *this; }

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{ return this->c.begin(); }

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{ return this->c.end(); }

#endif
