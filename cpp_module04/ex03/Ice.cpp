#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{}

Ice::Ice(const Ice& copy) : AMateria(copy.type)
{}

Ice& Ice::operator=(const Ice &copy)
{
	this->type = copy.type;
	return (*this);
}

Ice::~Ice(void)
{}

AMateria* Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}
