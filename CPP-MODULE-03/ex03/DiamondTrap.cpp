/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:48:02 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/03 13:48:03 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called sucessfully" << std::endl;

}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " deleted sucessfully" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& original) : ClapTrap(original.name + "_clap_name"), ScavTrap(original.name), FragTrap(original.name)
{
    *this = original;
    std::cout << "DiamondTrap " << this->name << " was created sucessfully" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{ 
    ScavTrap::name = name;
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->energyPoints = 50;
    std::cout << "DiamondTrap " << this->name << " created sucessfully" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
    if (&original != this)
    {
        ScavTrap::name = original.name;
        ClapTrap::name = original.name + "_clap_name";
        this->name = original.name;
        this->hitPoints = original.hitPoints;
        this->energyPoints = original.energyPoints;
        this->attackDamage = original.attackDamage;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->name << " | ClapTrap name: " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::printStatus()
{
    std::cout << "DiamondTrap: " << this->name << " | Hit Points: " << this->hitPoints << " | Energy Points: ";
    std::cout << this->energyPoints << " | Attack Damage: " << this->attackDamage << std::endl;
}