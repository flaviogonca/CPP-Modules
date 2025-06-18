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
    this->brain = new Brain();
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat& original)
{
    if (&original != this)
    {
        delete this->brain;
        this->brain = new Brain();
        this->type = original.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << this->type << ": Miauuu..." << std::endl;
}
