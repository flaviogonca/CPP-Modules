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

class Contact {

    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestScret;
        unsigned int phoneNumber;

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
        unsigned int getPhoneNumber();
};

#endif