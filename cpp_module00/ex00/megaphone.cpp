/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 21:46:33 by myukang           #+#    #+#             */
/*   Updated: 2022/07/03 17:27:36 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ostream>

class megaphone
{
	private:
		int ac;
		char **argv;
	public:
		megaphone(const int ac, const char **argv) : ac(ac), argv(argv)
};

int	main(int ac, char **argv)
{
	megaphone	phone(ac, argv);

	return (0);
}
