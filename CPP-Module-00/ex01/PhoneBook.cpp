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

PhoneBook::PhoneBook()
{
    counter = 0;
    curIndex = 0;
}

void PhoneBook::showOption()
{
    std::cout << GREEN << "-->  ADD   " << "➕" << std::endl;
    std::cout << RESET << "--> SEARCH " << "⚫" << std::endl;
    std::cout << RED << "-->  EXIT  " << "❌" << std::endl;
    std::cout << YELLOW << "Enter One Of the Options Above: " << RESET;
}

void PhoneBook::showHeader(void)
{
    std::cout << YELLOW << "==========*===========*===========*===========" << RESET << std::endl;
    std::cout << ORANGE << "           **My Awesome PhoneBook**           " << RESET << std::endl;
    std::cout << YELLOW << "==========*===========*===========*===========" << RESET << std::endl;
    std::cout << "          -           -          #By: " << GREEN << "fmalungo" << RESET << std::endl;
}

void PhoneBook::addContactInfo()
{

    if (counter == 8 && curIndex == 8)
        curIndex = 0;
    else if (counter < 8)
        counter++;
    contact[curIndex].setFirstName();
    contact[curIndex].setLastName();
    contact[curIndex].setNickName();
    contact[curIndex].setPhoneNumber();
    contact[curIndex].setDarkestScret();
    curIndex++;
}

void PhoneBook::getContactByIndex()
{
    int index;
    std::string i;

    if (counter < 1)
        return;
    std::cout << YELLOW << "Enter the index to see more details of contact: " << RESET << std::endl;
    std::getline(std::cin, i);
    index = std::atoi(i.c_str());
    std::cout << ORANGE << "Index: " << RESET << index << std::endl;
    std::cout << ORANGE << "counter: " << RESET << counter << std::endl;
    if ((index + 1) > counter || index  < 0)
        std::cout << RED << "Invalid Index" << RESET << std::endl;
    else
    {
        std::cout << GREEN << "First Name: " << RESET << contact[index].getFirstName() << std::endl;
        std::cout << GREEN << "Last Name: " << RESET << contact[index].getLastName() << std::endl;
        std::cout << GREEN << "Nick Name: " << RESET << contact[index].getNickName() << std::endl;
        std::cout << GREEN << "Phone Number: " << RESET << contact[index].getPhoneNumber() << std::endl;
        std::cout << GREEN << "Darkest Secret Name: " << RESET << contact[index].getDarkestScret() << std::endl;
    }
}

std::string truncate(std::string str)
{

    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return str;
}

void PhoneBook::displayContactList()
{
    int i = 0;

    std::cout << std::setw(45) << "=============================================" << std::endl;
    std::cout << "|" << std::setw(10) << std::right << "Index";
    std::cout << "|" << std::setw(10) << std::right << "First Name";
    std::cout << "|" << std::setw(10) << std::right << "Last Name";
    std::cout << "|" << std::setw(10) << std::right << "Nick Name";
    std::cout << "|" << std::endl;
    std::cout << std::setw(45) << "=============================================" << std::endl;
    while (i < counter)
    {
        std::cout << "|" << std::setw(10) << std::right << i;
        std::cout << "|" << std::setw(10) << std::right << truncate(contact[i].getFirstName());
        std::cout << "|" << std::setw(10) << std::right << truncate(contact[i].getLastName());
        std::cout << "|" << std::setw(10) << std::right << truncate(contact[i].getNickName());
        std::cout << "|" << std::endl;
        std::cout << std::setw(45) << "=============================================" << std::endl;
        i++;
    }
}
