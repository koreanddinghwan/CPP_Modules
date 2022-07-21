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
//	Bureaucrat test("Bob", 0);

	Bureaucrat test1("pam", 2);
	Bureaucrat test2("map", 149);
	Form form("tester", 1, 10);

	std::cout<<form<<std::endl;

	form.beSigned(test1);

	//
	std::cout<<std::endl;

	test1.increGrade();
	form.beSigned(test1);

	return 0;
}
