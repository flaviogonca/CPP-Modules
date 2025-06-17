/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:02:15 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/09 18:02:19 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;

    public:
        Dog();
        ~Dog();
        Dog(const Dog& original);
        Dog& operator=(const Dog& original);

        void makeSound() const;
};

#endif
