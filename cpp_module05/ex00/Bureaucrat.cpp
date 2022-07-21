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
	try {
		if (grade < Bureaucrat::MAXGRADE)
		{
			GradeTooHighException e;
			throw e;
		}
		else if (grade > Bureaucrat::MINGRADE)
		{
			GradeTooLowException e;
			throw e;
		}
		this->grade = grade;
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
		std::cout<<"Wrong Bureaucrat Constructed...exit"<<std::endl;
		exit(1);
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.getName()), grade(copy.getGrade())
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	this->grade = copy.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout<<"Bureaucrat Destructor Called"<<std::endl;
}

const std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::increGrade(void)
{
	try {
		if (this->grade == Bureaucrat::MAXGRADE)
		{
			GradeTooHighException e;
			throw e;
		}
		this->grade--;
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}
}

void Bureaucrat::decreGrade(void)
{
	try {
		if (this->grade == Bureaucrat::MINGRADE)
		{
			GradeTooLowException e;
			throw e;
		}
		this->grade++;
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
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
