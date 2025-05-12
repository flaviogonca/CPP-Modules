/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:18:05 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/12 09:18:07 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    this->type = weapon;
}

const std::string& Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
