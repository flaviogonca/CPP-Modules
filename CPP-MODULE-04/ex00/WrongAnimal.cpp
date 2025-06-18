/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:45:21 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/10 10:45:22 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
    this->type = "Tiger";
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
    this->type = original.type;
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& original)
{
    if (&original != this)
    {
        this->type = original.type;
    }
    return *this;
}

const std::string& WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << this->type << ": roarrrrrr..." << std::endl;
}