/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:50:02 by fmalungo          #+#    #+#             */
/*   Updated: 2025/04/28 15:52:59 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define YELLOW "\033[93m"
#define ORANGE "\033[38;5;208;1m"
#define RESET "\033[0m"

#include "Contact.hpp"

class PhoneBook {

    private:
        Contact contact[3];
        short   counter;
        short   curIndex;

    public:
        PhoneBook();
        void    showHeader();
        void    showOption();
        void    addContactInfo();
        void    searchContactInfo();
        void    displayContactList();
        void    getContactByIndex();

};

#endif
