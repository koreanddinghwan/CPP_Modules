/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:48:23 by myukang           #+#    #+#             */
/*   Updated: 2022/07/07 21:05:36 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		Zombie(void);
		void announce(void) const;
		~Zombie(void);
		void set_name(std::string name);
		const char *get_name(void) const;
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie	*zombieHorde(int n, std::string name);
#endif
