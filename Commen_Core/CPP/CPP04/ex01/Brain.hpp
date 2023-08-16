/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:50:54 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 10:55:55 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
    {
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain &);
        Brain(const std::string &);
        Brain &operator=(const Brain &);
        ~Brain();

        const std::string &getIdea(size_t) const;
    };

#endif
