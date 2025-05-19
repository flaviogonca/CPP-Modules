/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:45:37 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/19 16:45:41 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl harl;
    switch (ac)
    {
        case 2:
            harl.complain(av[1]);
            break;
        
        default:
            std::cout << "Try: ./Harl2.0 <DEBUG or INFO or ERROR or WARNING>" << std::endl;
            return 1;
    }
    return 0;
}
