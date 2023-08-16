/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:10:53 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 09:33:09 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
: _name("<noName>")
, _school("<noSchool>")
{}

Data::Data(const std::string &name, const std::string &school)
: _name(name)
, _school(school)
{}

Data::Data(const Data &copy)
: _name(copy._name)
, _school(copy._school)
{}

Data &Data::operator=(const Data &copy)
{
  _name = copy._name;
  _school = copy._school;
  return (*this);
}

Data::~Data()
{}

const std::string &Data::getName() const { return (_name); }

const std::string &Data::getSchool() const { return (_school); }

std::ostream &operator<<(std::ostream &out, const Data &data)
{
  out << "My name is \'" << data.getName() << "\', I am studing at \'" << data.getSchool() << '\'';
  return (out);
}
