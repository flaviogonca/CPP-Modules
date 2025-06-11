/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:44:32 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/02 17:44:33 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor" << " was called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " deleted sucessfully" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    name = _name;
    std::cout << "ScavTrap " << _name << " was created sucessfully" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
        std::cout << "ScavTrap " << name << " was created sucessfully" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
    if (&original != this)
    {
        ClapTrap::operator=(original);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints < 1 || hitPoints < 1)
    {
        std::cout << "ScavTrap Can not attack, no energy or hit points left" << std::endl;
        return ;
    }
    
    --energyPoints;
    std::cout << GREEN << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << ORANGE << "ScavTrap " << this->name << " is now in Gate keeper mode" << RESET << std::endl;
}

void ScavTrap::printStatus()
{
    std::cout << "ScavTrap: " << this->name << " | Hit Points: " << this->hitPoints << " | Energy Points: ";
    std::cout << this->energyPoints << " | Attack Damage: " << this->attackDamage << std::endl;
}