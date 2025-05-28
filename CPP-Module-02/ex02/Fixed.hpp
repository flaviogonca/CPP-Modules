/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:11:30 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/26 09:22:27 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixedPointNbr;
        static const int fractionalBits = 8;

    public:
        Fixed();
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed(const Fixed& original);
        Fixed& operator=(const Fixed& original);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        /* Overload Operators */
        Fixed operator+(const Fixed &obj) const;
        Fixed operator-(const Fixed &obj) const;
        Fixed operator*(const Fixed &obj) const;
        Fixed operator/(const Fixed &obj) const;
        Fixed& operator++( void );
        Fixed& operator--( void );
        Fixed operator++( int );
        Fixed operator--( int );

        bool operator<(const Fixed& obj) const;
        bool operator>(const Fixed& obj) const;
        bool operator<=(const Fixed& obj) const;
        bool operator>=(const Fixed& obj) const;
        bool operator==(const Fixed& obj) const;
        bool operator!=(const Fixed& obj) const;

        /* Public overloaded member functions */
        static Fixed& min(Fixed &obj1, Fixed &obj2);
        static const Fixed& min(const Fixed &obj1, const Fixed &obj2);
        static Fixed& max(Fixed &obj1, Fixed &obj2);
        static const Fixed& max(const Fixed &obj1, const Fixed &obj2);
};

    std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
