#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : ICharacter(), name("NoName"), idx(0)
{
	std::cout<<"Character Constructor Called"<<std::endl;
}

Character::Character(const std::string name) : ICharacter(), name(name), idx(0)
{
	std::cout<<"Character Constructor Called"<<std::endl;
}

Character::Character(const Character &copy) : ICharacter(), name(copy.name), idx(copy.idx)
{
	std::cout<<"Character Copy Constructor Called"<<std::endl;
	for (int i = 0 ; i < copy.idx ; i++)
		this->slots[i] = copy.slots[i]->clone();
}

Character& Character::operator=(const Character &copy)
{
	for (int i = 0; i < this->idx ; i++)
		delete this->slots[i];
	for (int i = 0 ; i < copy.idx ; i++)
		this->slots[i] = copy.slots[i]->clone();
	this->idx = copy.idx;
	return (*this);
}

Character::~Character(void)
{
	std::cout<<"Character Destructor Called"<<std::endl;
	for (int i = 0; i < this->idx; i++)
		delete this->slots[i];
}

std::string const & Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (this->idx > 3)
		return ;
	this->slots[this->idx] = m;
	this->idx++;
}

void Character::unequip(int idx)
{
	if (this->idx == 0)
	{
		std::cout<<"check index"<<std::endl;
		return ;
	}
	else if (this->idx - 1 < idx)
	{
		std::cout<<"check index"<<std::endl;
		return ;
	}
	else
	{
		for (int i = idx ; i < 3 ; i++)
		{
			AMateria *tmp = this->slots[i + 1];
			this->slots[i] = tmp;
		}
		this->idx--;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (this->idx == 0)
	{
		std::cout<<"check index"<<std::endl;
		return ;
	}
	else if (this->idx - 1 < idx)
	{
		std::cout<<"check index"<<std::endl;
		return ;
	}
	this->slots[idx]->use(target);
}
