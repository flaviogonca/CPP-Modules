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

int main(void)
{
    ClapTrap a("first");
    ScavTrap b("Second");

    a.printStatus();
    a.printStatus();
    b.attack("first");
    b.printStatus();
    ScavTrap c = b;
    c.printStatus();
    c.guardGate();
    return 0;
}