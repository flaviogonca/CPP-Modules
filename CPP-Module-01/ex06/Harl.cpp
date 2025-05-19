/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:43:49 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/19 16:43:51 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::string data[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*funtion[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (size_t i = 0; i < 4; i++)
    {
        if (data[i] == level)
        {
            for (size_t x = i; x < 4; x++)
            {
                (this->*funtion[x])();
                std::cout << std::endl;
            }
            return ;
        }
    }
     std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
