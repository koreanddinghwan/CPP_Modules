/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:30:06 by myukang           #+#    #+#             */
/*   Updated: 2022/07/10 20:10:59 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int size;
		Contact contacts[8];
		void update();
		void print_index() const;
		int  is_empty(std::string obj) const;
		int  exist_string(std::string obj) const;
	public:
		PhoneBook(void);
		void add();
		void search() const;
		void _exit() const;
};
#endif
