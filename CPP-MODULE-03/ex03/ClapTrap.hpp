/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:01:19 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/30 12:01:21 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_FPP
#define CLAPTRAP_FPP

#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define YELLOW "\033[93m"
#define ORANGE "\033[38;5;208;1m"
#define RESET "\033[0m"

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;

    public:
        ClapTrap(std::string _name);
        ClapTrap();
        ClapTrap(const ClapTrap& original);
        ClapTrap& operator=(const ClapTrap& original);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void printStatus();
        const std::string getName();
};

#endif

