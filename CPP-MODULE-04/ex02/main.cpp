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
    // const Animal *testando = new Animal();
    {
        const Animal* j[10];
        
        for (size_t i = 0; i < 10; i++)
        {
                if (i <= 5)
                    j[i] = new Dog();
                else
                    j[i] = new Cat();
        }
        
        for (size_t i = 0; i < 10; i++)
            j[i]->makeSound();
        
        for (size_t i = 0; i < 10; i++)
            delete j[i];
    }
    std::cout << "============================" << std::endl;
    {
        const Animal* x[3];
        
        x[0] = new Dog();
        x[1] = new Cat();
        x[2] = new Cat();
        
        x[0]->makeSound();
        x[1]->makeSound();
        x[2]->makeSound();
        delete x[1];
        x[1] = x[2];
        
        x[1]->makeSound();
        delete x[0];
        delete x[2];
    }
    /*
    std::cout << "============================" << std::endl;
    {
        Animal *d = new Dog();
        d->makeSound();
        std::cout << "getType "  + d->getType() << std::endl;


        Animal *c = new Cat();


        c->makeSound();
        std::cout << "getType "  + c->getType() << std::endl;
        

        Cat f ;

        Animal *copy = new Cat(f);

        copy->makeSound();
        std::cout << "getType "  + copy->getType() << std::endl;

        delete c;
        delete d;
        delete copy;
    }
    */

    return 0;
}