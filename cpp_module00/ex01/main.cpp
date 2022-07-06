/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:30:17 by myukang           #+#    #+#             */
/*   Updated: 2022/07/06 00:34:37 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;

	while (1)
	{
		int	command;

		std::cout<<"작업을 선택하세요"<<std::endl;
		std::cout<<"1. ADD"<<std::endl;
		std::cout<<"2. SEARCH"<<std::endl;
		std::cout<<"3. EXIT"<<std::endl;
		std::cin>>command;
		if (command == 1)
			phonebook.add();
		else if (command == 2)
			phonebook.search();
		else if (command == 3)
			phonebook.exit();
		else
			std::cout<<"항상 사용자의 입력을 믿지 마세요...그래서 이 입력은 무시됩니다."<<std::endl;
	}
	return (0);
}
