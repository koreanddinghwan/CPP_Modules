/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 00:34:58 by myukang           #+#    #+#             */
/*   Updated: 2022/07/06 22:16:53 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::get_string(std::string &obj)
{
	std::cout<<"입력 >>"<<std::endl;
	std::getline(std::cin, obj);
	if (std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		get_string(obj);
	}
	std::cout<<"test"<<std::endl;
	std::cin.clear();
	clearerr(stdin);
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
