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
    name = _name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ClapTrap " << _name << " was created sucessfully" << std::endl;
}

ClapTrap::ClapTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ClapTrap default constructor" << " was called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " deleted sucessfully" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original)
{
        name = original.name;
        hitPoints = original.hitPoints;
        energyPoints = original.energyPoints;
        attackDamage = original.attackDamage;
        std::cout << "ClapTrap " << name << " was created sucessfully" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
    if (this != &original)
    {
        name = original.name;
        hitPoints = original.hitPoints;
        energyPoints = original.energyPoints;
        attackDamage = original.attackDamage;
    }
    return *this;
}


void ClapTrap::attack(const std::string& target)
{
    if ((energyPoints < 1 || hitPoints < 1) && attackDamage < 0)
        return ;
    --energyPoints;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((energyPoints < 1 || hitPoints < 1) && amount >= (unsigned int)hitPoints)
        return ;
    hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " suffered " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints < 1 || hitPoints < 1)
        return ;
    --energyPoints;
    hitPoints += amount;
    std::cout << "ClapTrap " << this->name << " repaired itself and has got +" << amount << " Hit points" << std::endl;
}

void ClapTrap::printStatus()
{
    std::cout << "ClapTrap: " << this->name << " | Hit Points: " << this->hitPoints << " | Energy Points: ";
    std::cout << this->energyPoints << " | Attack Damage: " << this->attackDamage << std::endl;
}