#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void) : idx(0)
{
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->idx ; i++)
		delete this->slots[i];
}

void MateriaSource::learnMateria(AMateria *mate)
{
	if (this->idx > 3)
		return ;
	this->slots[this->idx++] = mate;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (type.compare("ice") == 0)
		return (new Ice());
	else if(type.compare("cure") == 0)
		return (new Cure());
	else
		return NULL;
}
