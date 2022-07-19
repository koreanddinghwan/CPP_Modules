#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <cstddef>
#include <string>

Character::Character(void) : ICharacter(), name("NoName"), idx(0)
{
}

Character::Character(const std::string name) : ICharacter(), name("NoName"), idx(0)
{}

std::string const & Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (this->idx >= 3)
		return ;
	this->slots[this->idx] = m;
	this->idx++;
}

void Character::unequip(int idx)
{
	if (this->idx == 0)
		return ;
	else if (this->idx - 1 < idx)
		return ;
	else
	{
		for (int i = idx ; i < 3 ; i++)
		{
			AMateria *tmp = this->slots[i + 1];
			this->slots[i] = tmp;
		}
	}
}

Character::Character(const Character &copy)
{
	for (int i = 0 ; i < copy.idx ; i++)
	{
		if (copy.slots[copy.idx]->getType().compare("ice") == 0)
			this->slots[i] = new Ice();
		else if (copy.slots[copy.idx]->getType().compare("ice") == 0)
			this->slots[i] = new Cure();
	}
}

void Character::use(int idx, ICharacter &target)
{
	//usage by AMateria::use
}
