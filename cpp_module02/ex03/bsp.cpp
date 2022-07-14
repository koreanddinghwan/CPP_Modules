/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:35:40 by myukang           #+#    #+#             */
/*   Updated: 2022/07/14 03:21:53 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>
#include <cstdint>
#include <iterator>

/*
 * triangle validation
 * https://www.geeksforgeeks.org/check-whether-triangle-is-valid-or-not-if-three-points-are-given/
 * */
bool check_triangle(Point const a, Point const b, Point const c)
{
	Fixed rtn;

	rtn = (a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety()));
	if (rtn == 0)
	{
		std::cout<<"these three points can not make a triangle"<<std::endl;
		return (false);
	}
	else
		return (true);
}

Fixed ft_abs(Fixed rtn)
{
	if (rtn < 0)
		return (rtn * -1);
	else
		return (rtn);
}

/*
 * check_triangle
 * https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/
 * */
Fixed area(Point const a, Point const b, Point const c)
{
	Fixed rtn;

	rtn = ((a.getx()*(b.gety()-c.gety()) + b.getx()*(c.gety()-a.gety())+ c.getx()*(a.gety()-b.gety()))/2.0f);
	return (ft_abs(rtn));
}

/*
 * 꼭지점인가?
 * */
bool isvertex(Point const a, Point const b, Point const c, Point const point)
{
	if ((point == a) || (point == b) || (point == c))
		return (true);
	else
		return (false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (check_triangle(a, b, c) == false)
		return (false);

	Fixed total = area(a, b, c);
	Fixed PAB = area(point, a, b);
	Fixed PAC = area(point, a, c);
	Fixed PBC = area(point, b, c);
	if (PAB == 0 || PBC == 0 || PAC == 0)
		return (false);
	if (PAB + PAC + PBC != total)
		return (false);
	return (true);
}
