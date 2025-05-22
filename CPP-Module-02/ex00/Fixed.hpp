/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:11:30 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/21 17:11:31 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixedPointNbr;
        static const int fractionalBits = 0;

    public:
        Fixed();
        Fixed(const Fixed& original);
        Fixed& operator=(const Fixed& original);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif