/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 03:32:14 by myukang           #+#    #+#             */
/*   Updated: 2022/07/22 03:40:53 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
//	Bureaucrat test("Bob", 0);

	Bureaucrat test1("pam", 2);
	Bureaucrat test2("map", 149);

	Form *ptr = new ShrubberyCreationForm("docs");
	test1.executeForm(*ptr);
	std::cout<<std::endl;

	test1.increGrade();
	delete ptr;

	std::cout<<std::endl<<std::endl<<std::endl<<std::endl;
	Bureaucrat test3("myukang", 46);
	Form *ptr2 = new RobotomyRequestForm(test3.getName());

	test3.executeForm(*ptr2);

	test3.increGrade();
	test3.executeForm(*ptr2);

	test3.signForm(*ptr2);

	delete ptr2;
	return 0;
}
