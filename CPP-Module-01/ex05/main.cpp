/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:52:10 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/14 16:52:11 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "Try: ./Harl2.0 <DEBUG or INFO or ERROR or WARNING>" << std::endl;
        return 1;
    }
    Harl harl;

    harl.complain(av[1]);
    return 0;
}
