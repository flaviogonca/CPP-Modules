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
}

Animal::~Animal()
{
    std::cout << this->type << " Destryed" << std::endl;
}

const std::string& Animal::getType() const
{
    return this->type;
}
