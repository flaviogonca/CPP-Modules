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
    std::fstream file(av[1], std::ios::in);
    if (!file)
    {
        std::cerr << "Could Not find/open <" << av[1] << "> file, try again" << std::endl;
        return 1;
    }
    if (file.eof())
    {
        std::cerr << "Empty file" << std::endl;
        return 1;
    }
    std::string newfile = av[1];
    std::fstream file1(newfile.append(".replace"), std::ios::out);
    if (!file1)
    {
        std::cerr << "Could Not create <" << av[1] << ".replace > file, try again" << std::endl;
        return 1;
    }
    
    std::string line;
    while (std::getline(file, line))
    {
        file1 << line << std::endl;
    }
    file1.close();
    file.close();
    return 0;
}
