/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 03:32:14 by myukang           #+#    #+#             */
/*   Updated: 2022/07/21 03:32:15 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try {

		Bureaucrat test("Bob", 0);
		Bureaucrat test1("pam", 2);
		Bureaucrat test2("map", 149);

		test1.increGrade();
		test1.increGrade();

		std::cout<<test1<<std::endl;

		test2.decreGrade();
		test2.decreGrade();
		std::cout<<test2<<std::endl;

	} catch (std::exception &e)
	{
		e.what();
	}
	return 0;
}
