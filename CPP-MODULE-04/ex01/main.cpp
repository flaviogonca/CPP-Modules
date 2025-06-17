/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:54:58 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/09 17:55:01 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* j[10];

    // for (size_t i = 0; i < 10; i++)
    // {
    //     if (i <= 5)
    //         j[i] = new Dog();
    //     else
    //         j[i] = new Cat();
    // }

    // for (size_t i = 0; i < 10; i++)
    //     j[i]->makeSound();

    // for (size_t i = 0; i < 10; i++)
    //     delete j[i];

    const Animal* x[3];

    x[0] = new Dog();
    x[1] = new Cat();
    x[2] = new Cat();
    
    x[0]->makeSound();
    x[1]->makeSound();
    x[2]->makeSound();
    std::cout << "============================" << std::endl;
    delete x[1];
    x[1] = x[2];

    delete x[0];
    delete x[2];

    return 0;
}