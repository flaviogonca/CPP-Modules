/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:15:08 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/28 12:15:09 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::Point(const float _x, const float _y): x(_x), y(_y)
{
}

Point::~Point()
{
}

Point::Point(const Point& obj)
{
    *this = obj;
}

Point& Point::operator=(const Point& obj)
{
    if (this != &obj)
    {

    }
    return *this;
}

const Fixed& Point::getPointX(void) const
{
    return this->x;
}

const Fixed& Point::getPointY(void) const
{
    return this->y;
}