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
    std::cout << this->type + " created successfully" << std::endl;
}

Cat::~Cat()
{
    std::cout << this->type + " Destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miauuu..." << std::endl;
}
