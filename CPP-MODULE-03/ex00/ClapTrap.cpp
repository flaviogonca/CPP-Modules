/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:01:25 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/30 12:01:27 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "ClapTrap " << _name << " was created sucessfully" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " deleted sucessfully" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original)
{

}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
    if (this != &original)
    {

    }
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}
