/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:16:46 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/12 09:16:50 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon _weapon)
{
    this->name = name;
    this->_weapon = _weapon;
}

HumanA::~HumanA()
{
}


void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->_weapon.getType() << std::endl;
}
