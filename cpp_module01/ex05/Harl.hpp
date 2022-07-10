/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:57:38 by myukang           #+#    #+#             */
/*   Updated: 2022/07/10 22:00:36 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	struct data
	{
	std::string key;
	void (Harl::*fp)(void);
	};
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		struct data data[4];
	public:
		Harl(void);
		void complain(std::string level);
};

#endif
