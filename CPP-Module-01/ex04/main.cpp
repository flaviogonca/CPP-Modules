/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:29:59 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/12 15:30:00 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Try: <filename> <stringToSearch> <stringToReplace>" << std::endl;
        return 1;
    }
    std::string str1 = av[2];
    std::string str2 = av[3];
    std::string filename = av[1];
    if (str1.empty() || str2.empty() || filename.empty())
    {
        std::cerr << "<filename> <stringToSearch> <stringToReplace> Must not be empty" << std::endl;
        return 1;
    }
    std::fstream file(av[1], std::ios::in);
    if (!file)
    {
        std::cerr << "Could Not find/open <" << filename << "> file, try again" << std::endl;
        return 1;
    }
    std::string line;
    std::string content;
    std::cout << content;
    std::fstream file1(filename.append(".replace"), std::ios::out);
    while (std::getline(file, line))
        content += line + '\n';
    if (!file1)
    {
        std::cerr << "Could Not create <" << filename << ".replace > file, try again" << std::endl;
        return 1;
    }
    size_t i = -1;
    while (++i < content.size() - 1)
    {
        if (content.at(i) == str1.at(0) && str1.compare(content.substr(i,str1.length())) == 0)
        {
            file1 << str2;
            i += str1.length();
        }
        file1 << content.at(i);
    }
    file1.close();
    file.close();
    return 0;
}
