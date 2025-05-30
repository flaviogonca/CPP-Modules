/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:15:14 by fmalungo          #+#    #+#             */
/*   Updated: 2025/05/28 12:15:16 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;

    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& obj);
        ~Point();
        Point& operator=(const Point& obj);
        const Fixed& getPointX(void) const;
        const Fixed& getPointY(void) const;
};


#endif