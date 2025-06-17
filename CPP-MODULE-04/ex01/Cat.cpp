/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:02:41 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/09 18:02:42 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    brain = new Brain();
    std::cout << "😼 Cat Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << this->type + " Destroyed" << std::endl;
}

Cat::Cat(const Cat& original): Animal()
{
    this->type = original.type;
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat& original)
{
    std::cout <<" HELLO THERE" << std::endl;
    if (&original != this)
    {
        Brain* newBrain = new Brain();
        delete this->brain;
        this->brain = newBrain;
        this->type = original.type;
    }
    std::cout <<" HELLO THERE" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << this->type << ": Miauuu..." << std::endl;
}
