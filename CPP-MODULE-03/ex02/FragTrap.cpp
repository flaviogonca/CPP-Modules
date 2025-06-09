/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:14:21 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/03 11:14:22 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor" << " was called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " deleted sucessfully" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    name = _name;
    std::cout << "FragTrap " << _name << " was created sucessfully" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
        std::cout << "FragTrap " << name << " was created sucessfully" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& original)
{
    if (&original != this)
    {
        ClapTrap::operator=(original);
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "👍 Give me five! 🎉✨" << std::endl;
}

void FragTrap::printStatus()
{
    std::cout << "FragTrap: " << this->name << " | Hit Points: " << this->hitPoints << " | Energy Points: ";
    std::cout << this->energyPoints << " | Attack Damage: " << this->attackDamage << std::endl;
}
