/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:26:01 by fmalungo          #+#    #+#             */
/*   Updated: 2025/04/29 09:26:06 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setFirstName() {
	std::cout << "Enter Your First Name: ";
    std::getline(std::cin, firstName);
}

void    Contact::setLastName() {
	std::cout << "Enter Your last Name: ";
    std::getline(std::cin, lastName);
}

void    Contact::setNickName() {
	std::cout << "Enter Your Nick Name: ";
    std::getline(std::cin, nickName);
}

void    Contact::setDarkestScret() {
	std::cout << "Enter Your Darkest Scret: ";
    std::getline(std::cin, darkestScret);
}

void    Contact::setPhoneNumber() {
    std::string value;
    int i;

    do
    {
        i = -1;
	    std::cout << "Enter Your Phone Number: ";
        std::getline(std::cin, value);
        while (value[++i])
        {
            if (!std::isdigit(value[i]) && value[i] != '\0')
            {
        	    std::cout << RED << "!! Invalid Phone Number !!" << RESET << std::endl;
                break;
            }
            if (value[i + 1] == '\0')
                phoneNumber = value;
        }
    }
    while (phoneNumber != value || !value[0]);
}

const   std::string Contact::getFirstName() {
    return firstName;
}

const   std::string Contact::getLastName() {
    return lastName;
}


const   std::string Contact::getNickName() {
    return nickName;
}

const   std::string Contact::getDarkestScret() {
    return darkestScret;
}

const   std::string Contact::getPhoneNumber() {
    return phoneNumber;
}