/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:48:23 by myukang           #+#    #+#             */
/*   Updated: 2022/07/07 17:00:05 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		const std::string name;
	public:
		Zombie(std::string name);
		Zombie(void);
		void announce(void) const;
		~Zombie(void);
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif
