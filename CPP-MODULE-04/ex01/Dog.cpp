/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:02:24 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/09 18:02:26 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    brain = new Brain();
    std::cout << "🐕 Dog Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << this->type + " Destroyed" << std::endl;
}

Dog::Dog(const Dog& original): Animal()
{
    this->type = original.type;
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog& original)
{
    if (&original != this)
    {
        Brain* newBrain = new Brain();
        delete this->brain;
        this->brain = newBrain;
        this->type = original.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << this->type << ": WoooWooo..." << std::endl;
}