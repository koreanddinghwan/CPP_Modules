/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 03:32:14 by myukang           #+#    #+#             */
/*   Updated: 2022/07/22 03:47:29 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern test;
	Form* tmp;


	tmp = test.makeForm("shrubbery creation", "TEST1");
	if (tmp)
	{
		std::cout<<*tmp<<std::endl;
		free(tmp);
	}

	tmp = test.makeForm("robotomy request", "TEST2");
	if (tmp)
	{
		std::cout<<*tmp<<std::endl;
		free(tmp);
	}


	tmp = test.makeForm("presidential pardon", "TEST3");
	if (tmp)
	{
		std::cout<<*tmp<<std::endl;
		free(tmp);
	}

	tmp = test.makeForm("presidential pardon?", "TEST4");
	if (tmp)
	{
		std::cout<<*tmp<<std::endl;
		free(tmp);
	}


	return 0;
}
