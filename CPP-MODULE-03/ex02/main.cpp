/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:01:42 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/30 12:02:21 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap a("first");
    ScavTrap b("Second");

    a.printStatus();
    b.attack("first");
    b.printStatus();
    ScavTrap c = b;
    c.printStatus();
    c.guardGate();
    std::cout << "========================================" << std::endl;
    FragTrap d("third");
    d.attack("Nobody");
    d.beRepaired(50);
    d.highFivesGuys();
    d.printStatus();
    return 0;
}