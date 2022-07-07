/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:54:57 by myukang           #+#    #+#             */
/*   Updated: 2022/07/07 16:17:37 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * temp object in this function exist only in this function
 * local variables scope is different by {}
 *
 * */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie temp(name);

	temp.announce();
}
