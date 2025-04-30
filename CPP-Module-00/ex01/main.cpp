/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:17:54 by fmalungo          #+#    #+#             */
/*   Updated: 2025/04/28 16:09:44 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string option;

	phoneBook.showHeader();

	while (true)
	{
		phoneBook.showOption();
		std::cin >> option;
		if (option == "EXIT")
			break ;
		else if (option == "ADD")
			phoneBook.addContactInfo();
		else if (option == "SEARCH")
		{
			phoneBook.displayContactList();
    		phoneBook.getContactByIndex();
		}
		else
			std::cout << RED << "Inválid Option Try Again" << RESET << std::endl;
	}
	return 0;
}
