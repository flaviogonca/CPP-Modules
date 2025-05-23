/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:11:35 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/21 17:11:38 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPointNbr(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = original;
}

Fixed& Fixed::operator=(const Fixed& original)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &original)
    {
        fixedPointNbr = original.getRawBits();
    }

    return *this;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return fixedPointNbr;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    fixedPointNbr = raw;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    fixedPointNbr = nbr << fractionalBits;
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPointNbr = roundf(nbr * (1 << fractionalBits));
}

float Fixed::toFloat( void ) const
{
    return (float)fixedPointNbr / (1 << fractionalBits);
}

int Fixed::toInt( void ) const
{
    return fixedPointNbr >> fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}
