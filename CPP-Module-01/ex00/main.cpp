/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 08:27:07 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/09 08:27:09 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "Try: ./App   Zombie_name" << std::endl;
        return 1;
    }

    Zombie* zombie = new Zombie(av[1]);
    zombie->announce();
    zombie->randomChump("Mee");

    delete zombie;
    return (0);
}
