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
    std::string value;

	std::cout << "Enter Your First Name: ";
    std::cin >> value;
    firstName = value;
}

void    Contact::setLastName() {
    std::string value;

	std::cout << "Enter Your last Name: ";
    std::cin >> value;
    lastName = value;
}

void    Contact::setNickName() {
    std::string value;

	std::cout << "Enter Your Nick Name: ";
    std::cin >> value;
    nickName = value;
}

void    Contact::setDarkestScret() {
    std::string value;

	std::cout << "Enter Your Darkest Scret: ";
    std::cin >> value;
    darkestScret = value;
}

void    Contact::setPhoneNumber() {
    unsigned int  value;

	std::cout << "Enter Your Phone Number: ";
    std::cin >> value;
    phoneNumber = value;
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

unsigned    int Contact::getPhoneNumber() {
    return phoneNumber;
}