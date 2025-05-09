/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 08:27:40 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/09 08:27:42 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <memory>

#define RED "\033[31m"
#define RESET "\033[0m"

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie();

        void announce( void );
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};

#endif
