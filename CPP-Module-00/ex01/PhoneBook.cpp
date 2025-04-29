/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:07:12 by fmalungo          #+#    #+#             */
/*   Updated: 2025/04/29 13:07:14 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    index = 0;
}

void    PhoneBook::showOption() {
    std::cout << YELLOW << "-->  ADD   " << "➕" << std::endl;
    std::cout << "--> SEARCH " << "⚫" << std::endl;
    std::cout << "-->  EXIT  " << "❌" << std::endl;
	std::cout << "Enter One Of the Options Above: ";
}

void    PhoneBook::showHeader(void) {
    std::cout << YELLOW << "==========*===========*===========*===========" << RESET << std::endl;
	std::cout << ORANGE << "           **My Awesome PhoneBook**           " << RESET << std::endl;
	std::cout << YELLOW << "==========*===========*===========*===========" << RESET << std::endl;
	std::cout << "          -           -          #By: " <<  GREEN << "fmalungo" << RESET << std::endl;
}

void    PhoneBook::addContactInfo() {

    contact[index].setFirstName();
    contact[index].setLastName();
    contact[index].setNickName();
    contact[index].setDarkestScret();
    contact[index].setPhoneNumber();
    index++;
    if (index == 8)
        index = 0;
}

void    PhoneBook::searchContactInfo() {
    int i = 0;
    
    std::cout << std::setw(44) << "============================================" << std::endl;
    std::cout << "|" << std::setw(10) << std::right << "Index";
    std::cout << "|" << std::setw(10) << std::right << "First Name";
    std::cout << "|" << std::setw(10) << std::right << "Last Name";
    std::cout << "|" << std::setw(10) << std::right << "Nick Name";
    std::cout << "|" << std::endl;
    std::cout << std::setw(44) << "============================================" << std::endl;
    while (i < index)
    {
        std::cout << "|" << std::setw(10) << std::right << i + 1;
        std::cout << "|" << std::setw(10) << std::right << contact[i].getFirstName();
        std::cout << "|" << std::setw(10) << std::right << contact[i].getLastName();
        std::cout << "|" << std::setw(10) << std::right << contact[i].getNickName();
        std::cout << "|" << std::endl;
        std::cout << std::setw(44) << "============================================" << std::endl;
        i++;
    }
}

