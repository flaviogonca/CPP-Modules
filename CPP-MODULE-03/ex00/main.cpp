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

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("first");

    a.printStatus();
    a.attack("The Monster");
    a.takeDamage(100);
    a.takeDamage(100);
    a.printStatus();
    ClapTrap b("second");

    b.printStatus();
    a.printStatus();
    a.beRepaired(5);
    a.beRepaired(5);
    a.printStatus();
    b.attack("first");
    b.printStatus();
    
    a = b;
    a.printStatus();
    b.printStatus();
    return 0;
}