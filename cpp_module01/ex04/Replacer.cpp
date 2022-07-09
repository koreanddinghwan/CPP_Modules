/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:37:00 by myukang           #+#    #+#             */
/*   Updated: 2022/07/09 15:59:47 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

//use member function in initilizer list
Replacer::Replacer(char *argv[])
	: old_name(argv[1]), new_name(get_new_name(argv[1])), s1(argv[2]), s2(argv[3])
{}

std::string Replacer::get_new_name(std::string str)
{
	return (str.append(".replace"));
}

void Replacer::openfile(void) const
{
	std::fstream new_file;
	std::fstream old_file;
	old_file.open(old_name, std::fstream::in);
	if (!old_file.is_open())
	{
		std::cout<<"I can not open this file =>"<<old_name<<std::endl;
		exit(1);
	}
	new_file.open(new_name, std::fstream::out);
	if (!new_file.is_open())
	{
		std::cout<<"I can not open this file =>"<<new_name<<std::endl;
		old_file.close();
		exit(1);
	}
}

void Replacer::replace(void) const
{
	std::string line;
	std::string write_buffer;

	size_t len = s1.length();
	while (std::getline(old_file, line))
	{
		while (true)
		{
			std::size_t pos = line.find(s1);
			if (pos == std::string::npos)
			{
				line.assign(write_buffer);
				new_file.write(line, line.length());
				write_buffer.clear();
				break ;
			}
			else
			{
				write_buffer.append();

			}
		}
	}
}
