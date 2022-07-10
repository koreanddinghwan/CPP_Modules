/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:57:42 by myukang           #+#    #+#             */
/*   Updated: 2022/07/10 22:02:43 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	data[0].key = "DEBUG";
	data[0].fp = &Harl::debug;
	data[1].key = "INFO";
	data[1].fp = &Harl::info;
	data[2].key = "WARNING";
	data[2].fp = &Harl::warning;
	data[3].key = "ERROR";
	data[3].fp = &Harl::error;
}

void Harl::debug(void)
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void Harl::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<<std::endl;
}

void Harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (level.compare(data[i].key))
		{
			data[i].(Harl::*fp)();
			return ;
		}
		i++;
	}
}
