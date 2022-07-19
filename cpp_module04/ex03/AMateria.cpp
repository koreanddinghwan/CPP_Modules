#include "AMateria.hpp"

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
	{}
	else if (this->type.compare("cure") == 0)
	{
		std::cout<<" * heals "<<target.getName()<<"'s wounds *"<<std::endl;
	}
}
