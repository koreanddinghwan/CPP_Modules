/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:37:01 by myukang           #+#    #+#             */
/*   Updated: 2022/07/09 15:51:39 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <string>

class Replacer
{
	private:
		const std::string	old_name;
		const std::string	new_name;
		const std::string	s1;
		const std::string	s2;
	public:
		Replacer(char *argv[]);
		void openfile(void) const;
	private:
		std::string			get_new_name(std::string str);
		void replace(void) const;
};


#endif
