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
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor" << " was called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " deleted sucessfully" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    this->name = _name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " was created sucessfully" << std::endl;
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
    if ((energyPoints < 1 || hitPoints < 1) && attackDamage < 0)
        return ;
    --energyPoints;
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::printStatus()
{
    std::cout << "ScavTrap: " << this->name << " | Hit Points: " << this->hitPoints << " | Energy Points: ";
    std::cout << this->energyPoints << " | Attack Damage: " << this->attackDamage << std::endl;
}