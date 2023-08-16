/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:50:51 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 10:56:15 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (size_t i = 0; i < 100; i++)
        _ideas[i] = "<noIdea>";
    std::cout << "class Brain\t\t[Default Constructor]" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "class Brain\t\t[Copy Constructor]" << std::endl;
    *this = copy;
}

Brain::Brain(const std::string &idea)
{
    for (size_t i = 0; i < 100; i++)
        _ideas[i] = idea;
    std::cout << "class Brain\t\t[String Constructor]" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
    for (size_t i = 0; i < 100; i++)
        _ideas[i] = copy._ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "class Brain\t\t[Destructor]" << std::endl;
}

const std::string &Brain::getIdea(size_t index) const
{
    return (_ideas[index]);
}
