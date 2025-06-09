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
    std::cout << this->type + " created successfully" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->type + " Destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WoooWooo..." << std::endl;
}