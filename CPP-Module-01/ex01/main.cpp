/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:53:27 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/09 10:53:29 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char *av[])
{
    int N = 10;
    if (ac != 2)
    {
        std::cout << "Try: ./App zombieName" << std::endl;
        return 1;
    }

	Zombie *zombies = zombieHorde(N, av[1]);
    for (size_t i = 0; i < N; i++)
        zombies[i].announce();

	delete[] zombies;
    return (0);
}
