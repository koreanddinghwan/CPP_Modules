/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:30:06 by myukang           #+#    #+#             */
/*   Updated: 2022/07/06 00:35:41 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int size;
		Contact contacts[8];
	public:
		PhoneBook(void);
		void add();
		void search() const;
		void exit() const;
}
#endif
