/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:30:06 by myukang           #+#    #+#             */
/*   Updated: 2022/07/06 22:02:26 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdio>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int size;
		Contact contacts[8];
		void update();
	public:
		PhoneBook(void);
		void add();
		void search() const;
		void _exit() const;
};
#endif
