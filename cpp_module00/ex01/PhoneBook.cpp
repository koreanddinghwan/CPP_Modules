/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:09:49 by myukang           #+#    #+#             */
/*   Updated: 2022/07/07 01:46:16 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : size(0)
{}

void PhoneBook::add(void)
{
	if (size == 8)
		update();
	else
	{
		contacts[size].make_contact();
		size++;
	}
}

void PhoneBook::search(void) const
{
	char buffer[11];

	std::cout.setf(std::ios::right, std::ios::adjustfield);
	std::cout.setf(std::ios::showbase);
	for (int i = 0; i < size; i++)
	{
		std::cout<<"|";
		std::cout<<std::setw(10)<<i;
		std::cout<<"|";
		std::cout<<std::setw(10)<<contacts[i].get_first_name(buffer);
		std::cout<<"|";
		std::cout<<std::setw(10)<<contacts[i].get_last_name(buffer);
		std::cout<<"|";
		std::cout<<std::setw(10)<<contacts[i].get_nick_name(buffer);
		std::cout<<"|";
		std::cout<<std::endl;
	}
	std::cout.unsetf(std::ios::showbase);
	print_index();
}

void PhoneBook::_exit(void) const
{
	std::cout<<"프로그램 종료...."<<std::endl;
	exit(0);
}

void PhoneBook::update(void)
{
	for (int i = 0;i < 8; i++)
	{
		contacts[i] = contacts[i+1];
	}
	size--;
	add();
}

void PhoneBook::print_index(void) const
{
	std::string str;

	std::cout<<"인덱스로 상세정보 출력"<<std::endl;
	while (1)
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout<<"다시 입력"<<std::endl;
			std::cin.clear();
			clearerr(stdin);
			continue ;
		}
		else
		{
			int	i;

			i = atoi(str.data());
			if (i >= size)
			{
				std::cout<<"다시 입력"<<std::endl;
				std::cin.clear();
				clearerr(stdin);
				continue ;
			}
			else
				contacts[i].printall();
			break ;
		}
	}
}
