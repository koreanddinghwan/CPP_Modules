#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("NoName"), grade(0)
{
	std::cout<<"Bureaucrat Constructor Called"<<std::endl;
}

Bureaucrat::Bureaucrat(const std::string name) : name(name), grade(0)
{
	std::cout<<"Bureaucrat Constructor Called"<<std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const unsigned int grade) : name(name)
{
	std::cout<<"Bureaucrat Constructor Called"<<std::endl;
	if (grade < Bureaucrat::MAXGRADE)
		throw GradeTooHighException();
	else if (grade > Bureaucrat::MINGRADE)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.getName()), grade(copy.getGrade())
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	(void)copy;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout<<"Bureaucrat Destructor Called"<<std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::increGrade(void)
{
	if (this->grade == Bureaucrat::MAXGRADE)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decreGrade(void)
{
	if (this->grade == Bureaucrat::MINGRADE)
		throw GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);//stack unwinding
		std::cout<<this->getName()<<" signed "<<form.getName()<<std::endl;
	} catch (std::exception &e) {
		std::cout<<this->getName()<<" couldn't sign "<<form.getName()<<" because "<<e.what()<<std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low!");
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &target)
{
	std::cout<<target.getName()<<", bureaucrat grade "<<target.getGrade()<<std::endl;
	return (os);
}
