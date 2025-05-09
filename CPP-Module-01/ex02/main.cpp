/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:32:46 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/09 13:32:48 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str="HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String   : " << std::hex << &str << std::endl;
    std::cout << "stringPTR: " << std::hex << stringPTR << std::endl;
    std::cout << "stringREF: " << std::hex << &stringREF << std::endl;

    std::cout << "------- Value -------" << std::endl;

    std::cout << "String   : " << std::hex << str << std::endl;
    std::cout << "stringPTR: " << std::hex << *stringPTR << std::endl;
    std::cout << "stringREF: " << std::hex << stringREF << std::endl;
    return 0;
}
