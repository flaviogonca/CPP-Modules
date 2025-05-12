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

HumanA::HumanA(std::string name, Weapon &weapon) : name(name),_weapon(weapon) {}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->_weapon.getType() << std::endl;
}
