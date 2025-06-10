/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:56:52 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/09 17:56:55 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Tiger";
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
    std::cout << this->type << " Destryed" << std::endl;
}

Animal::Animal(const Animal& original)
{
    this->type = original.type;
    std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal& original)
{
    if (&original != this)
    {
        this->type = original.type;
    }
    return *this;
}

const std::string& Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << this->type << ": roarrrrrr..." << std::endl;
}