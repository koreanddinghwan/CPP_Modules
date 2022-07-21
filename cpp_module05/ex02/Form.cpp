#include "Form.hpp"

Form::Form(void) : name("NoName"), is_signed(false), sign_perm(150), exec_perm(150)
{
	std::cout<<"Form Constructor Called"<<std::endl;
}

Form::Form(const std::string name, const unsigned int sign_perm, const unsigned int exec_perm) : name(name), is_signed(false), sign_perm(sign_perm), exec_perm(exec_perm)
{
	try {
		if (this->sign_perm < 1 || this->exec_perm < 1)
		{
			GradeTooHighException e;
			throw e;
		}
		else if (this->sign_perm > 150 || this->exec_perm > 150)
		{
			GradeTooLowException e;
			throw e;
		}
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
		std::cout<<"Wrong Form Constructed... exit"<<std::endl;
		exit(1);
	}
	std::cout<<"Form Constructor Called"<<std::endl;
}

Form::Form(const Form &copy) : name(copy.getName()), is_signed(copy.getSigned()), sign_perm(copy.getSignPerm()), exec_perm(copy.getExecPerm())
{
	std::cout<<"Form Copy Constructor Called"<<std::endl;
}

Form& Form::operator=(const Form &copy)
{
	this->is_signed = copy.getSigned();
	return (*this);
}

Form::~Form(void)
{
	std::cout<<"Form Destructor Called"<<std::endl;
}

const std::string Form::getName(void) const
{
	return (this->name);
}

bool Form::getSigned(void) const
{
	return (this->is_signed);
}

unsigned int Form::getSignPerm(void) const
{
	return (this->sign_perm);
}

unsigned int Form::getExecPerm(void) const
{
	return (this->exec_perm);
}

void Form::beSigned(const Bureaucrat &bure)
{
	if (this->getSigned() == true)
		return ;
	try {
		if (bure.getGrade() > this->getSignPerm())
		{
			GradeTooLowException e;
			throw (e);
		}
		this->is_signed = true;
		bure.signForm(*this);
	} catch (std::exception &e) {
		std::cout<<bure.getName()<<" couldn't sign "<<this->getName()<<" because "<<e.what()<<std::endl;
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("[Form threw exception : Grade Too High!]");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("[Form threw exception : Grade Too Low!]");
}

std::ostream& operator<<(std::ostream &os, const Form &form)
{
	std::cout<<"["<<form.getName()<<" STATUS]"<<std::endl;
	std::cout<<"["<<(form.getSigned() ? "SIGNED" : "NOT SIGNED")<<"]"<<std::endl;
	std::cout<<"["<<"SIGN PERM : "<<form.getSignPerm()<<"]"<<std::endl;
	std::cout<<"["<<"EXEC PERM : "<<form.getExecPerm()<<"]"<<std::endl<<std::endl;
	return (os);
}
