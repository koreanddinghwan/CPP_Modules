/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:12:20 by myukang           #+#    #+#             */
/*   Updated: 2022/07/07 21:16:26 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
# define HUMANA

class HumanA
{
	private:
		Weapon weapon;
	public:
		HumanA(void);
		HumanA(std::string name);
};

#endif
