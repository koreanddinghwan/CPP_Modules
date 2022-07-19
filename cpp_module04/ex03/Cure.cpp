#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{}

Cure::Cure(const Cure& copy) : AMateria(copy.type)
{}

Cure& Cure::operator=(const Cure &copy)
{
	this->type = copy.type;
	return (*this);
}

Cure::~Cure(void)
{}

AMateria* Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}
