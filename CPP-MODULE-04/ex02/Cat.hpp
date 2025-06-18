/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:02:34 by fmalungo          #+#    #+#             */
/*   Updated: 2025/06/09 18:02:36 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    private:
        Brain* brain;

    public:
        Cat();
        ~Cat();
        Cat(const Cat& original);
        Cat& operator=(const Cat& original);

        void makeSound() const;
};

#endif
