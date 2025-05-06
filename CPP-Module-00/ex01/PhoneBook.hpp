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

#include "Contact.hpp"

class PhoneBook {

    private:
        Contact contact[8];
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
