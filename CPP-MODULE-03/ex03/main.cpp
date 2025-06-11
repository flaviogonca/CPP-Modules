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

#include "DiamondTrap.hpp"


int main(void)
{
    DiamondTrap a("Hello");
    DiamondTrap b("World");
    std::cout << "============================================================" << std::endl;
    a.whoAmI();
    b.whoAmI();
    a.attack("World");
    std::cout << "============================================================" << std::endl;
    a.printStatus();
    b.printStatus();
    std::cout << "============================================================" << std::endl;
    DiamondTrap e;
    a = b;
    a.printStatus();
    a.whoAmI();
    a.attack("Test");
    std::cout << "============================================================" << std::endl;
    return 0;
}