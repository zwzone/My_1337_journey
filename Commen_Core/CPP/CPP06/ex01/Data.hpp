/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:11:02 by zwina             #+#    #+#             */
/*   Updated: 2022/10/07 09:32:01 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <cstdint>

class Data
  {
  private:
    std::string _name;
    std::string _school;
  public:
    Data();
    Data(const std::string &, const std::string &);
    Data(const Data &);
    Data &operator=(const Data &);
    ~Data();

    const std::string &getName() const;
    const std::string &getSchool() const;
  };

std::ostream &operator<<(std::ostream &, const Data &);

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
