/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:09:49 by myukang           #+#    #+#             */
/*   Updated: 2022/07/06 22:13:58 by myukang          ###   ########.fr       */
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
