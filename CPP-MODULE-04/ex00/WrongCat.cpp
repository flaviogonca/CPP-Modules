/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:45:37 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/10 10:45:39 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << this->type + " Destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& original): WrongAnimal()
{
    this->type = original.type;
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& original)
{
    if (&original != this)
    {
        this->type = original.type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << this->type << ": Miauuu..." << std::endl;
}