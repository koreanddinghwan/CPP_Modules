/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myukang <myukang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 01:14:04 by myukang           #+#    #+#             */
/*   Updated: 2022/07/18 13:16:06 by myukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap() , ScavTrap() 
{
	ClapTrap::name = name.append("_clap_name");
	this->name = "Unknown"; 
	this->hp = 100;
	this->energy = 50;
	this->damage = 30;
	std::cout<<"["<<name<<"]"<<"DiamondTrap Constructor Called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name)  : FragTrap(name), ScavTrap(name)
{
	ClapTrap::name = name.append("_clap_name");
	this->name = name;
	this->hp = 100;
	this->energy = 50;
	this->damage = 30;
	std::cout<<"["<<name<<"]"<<"DiamondTrap Constructor Called"<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	ClapTrap::name = copy.ClapTrap::name;
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy = copy.energy;
	this->damage = copy.damage;
	std::cout<<"["<<name<<"]"<<"DiamondTrap Copy Constructor Called"<<std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &target)
{
	ClapTrap::name = target.ClapTrap::name;
	this->name = target.name;
	this->hp = target.hp;
	this->energy = target.energy;
	this->damage = target.damage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout<<"["<<name<<"]"<<"DiamondTrap Destructor Called"<<std::endl;
}

void DiamondTrap::whoAmI(void)
{}
