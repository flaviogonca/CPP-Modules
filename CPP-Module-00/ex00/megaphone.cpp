/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 08:58:32 by fmalungo          #+#    #+#             */
/*   Updated: 2025/04/21 16:30:54 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
		return 1;
	}
	for (int i = 1; argv[i]; i++)
		for (int x = 0; argv[i][x]; x++)
			std::cout << (char)std::toupper(argv[i][x]);
	std::cout << std::endl;
	return 0;
}
