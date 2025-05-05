/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:33:27 by fmalungo          #+#    #+#             */
/*   Updated: 2025/04/28 17:33:31 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Contact_HPP
# define Contact_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define YELLOW "\033[93m"
#define ORANGE "\033[38;5;208;1m"
#define RESET "\033[0m"

class Contact {

    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestScret;
        std::string phoneNumber;

    public:
        void setFirstName();
        void setLastName();
        void setNickName();
        void setDarkestScret();
        void setPhoneNumber();

        const std::string getFirstName();
        const std::string getLastName();
        const std::string getNickName();
        const std::string getDarkestScret();
        const std::string getPhoneNumber();
};

#endif