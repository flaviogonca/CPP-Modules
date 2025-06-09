/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:14:15 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/03 11:14:17 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        /* data */
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string _name);
        FragTrap(const FragTrap& original);
        FragTrap& operator=(const FragTrap& original);

        void highFivesGuys(void);
        void printStatus();
};

#endif
