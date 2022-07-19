/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 23:52:40 by myukang           #+#    #+#             */
/*   Updated: 2022/07/19 23:52:41 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{}

AMateria::AMateria(const AMateria& copy) : type(copy.type)
{}

AMateria& AMateria::operator=(const AMateria& copy)
{
	this->type = copy.type;
	return (*this);
}

AMateria::~AMateria(void)
{}

const std::string &AMateria::getType(void) const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	if (this->type.compare("ice") == 0)
	{
		std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
	}
	else if (this->type.compare("cure") == 0)
	{
		std::cout<<" * heals "<< target.getName() <<"'s wounds *"<<std::endl;
	}
}
