/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:12:00 by zwina             #+#    #+#             */
/*   Updated: 2022/09/17 11:05:22 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    AAnimal **animals = new AAnimal*[4];

    for (size_t i = 0; i < 4; i++)
        {
            if (i < 4 / 2)
                animals[i] = new Cat();
            else
                animals[i] = new Dog();
        }
    for (size_t i = 0; i < 4; i++)
        delete animals[i];
    delete[] animals;
    return (0);
}
