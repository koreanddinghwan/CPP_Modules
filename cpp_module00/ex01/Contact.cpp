/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:34:58 by myukang           #+#    #+#             */
/*   Updated: 2022/07/07 01:30:33 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::get_string(std::string &obj)
{
	while (1)
	{
		std::getline(std::cin, obj);
		if (std::cin.eof())
		{
			std::cout<<"다시 입력"<<std::endl;
			std::cin.clear();
			clearerr(stdin);
			continue ;
		}
		else
			break ;
	}
}

void Contact::make_contact(void)
{
	std::cout<<"성을 입력하세요" <<std::endl;
	get_string(first_name);
	std::cout<<"이름을 입력하세요"<<std::endl;
	get_string(last_name);
	std::cout<<"별명을 입력하세요"<<std::endl;
	get_string(nick_name);
	std::cout<<"전화번호를 입력하세요" <<std::endl;
	get_string(phone_number);
	std::cout<<"개인정보를 입력하세요" <<std::endl;
	get_string(darkest_secret);
}

const char *Contact::get_first_name(char *buffer) const
{
	if (first_name.length() > 10)
	{
		std::size_t length = first_name.copy(buffer, 9, 0);
		buffer[length] = '.';
		buffer[length + 1] = '\0';
		return (buffer);
	}
	return (first_name.data());
}

const char *Contact::get_last_name(char *buffer) const
{
	if (last_name.length() > 10)
	{
		std::size_t length = last_name.copy(buffer, 9, 0);
		buffer[length] = '.';
		buffer[length + 1] = '\0';
		return (buffer);
	}
	return (last_name.data());
}

const char *Contact::get_nick_name(char *buffer) const
{
	if (nick_name.length() > 10)
	{
		std::size_t length = nick_name.copy(buffer, 9, 0);
		buffer[length] = '.';
		buffer[length + 1] = '\0';
		return (buffer);
	}
	return (nick_name.data());
}

void Contact::printall(void) const
{
	std::cout<<first_name.data()<<std::endl;
	std::cout<<last_name.data()<<std::endl;
	std::cout<<nick_name.data()<<std::endl;
	std::cout<<phone_number.data()<<std::endl;
}
