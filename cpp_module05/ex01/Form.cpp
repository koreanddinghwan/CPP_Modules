#include "Form.hpp"


Form::Form(void) : name("NoName"), is_signed(false), sign_perm(0), exec_perm(0)
{
	std::cout<<"Form Constructor Called"<<std::endl;
}

Form::Form(const std::string name, bool is_signed, const unsigned int sign_perm, const unsigned int exec_perm) : name(name), is_signed(is_signed), sign_perm(sign_perm), exec_perm(exec_perm)
{
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
{}

const std::string Form::getName(void) const;
bool Form::getSigned(void) const;
unsigned int Form::getSignPerm(void) const;
unsigned int Form::getExecPerm(void) const;
void Form::beSigned(const Bureaucrat &bure);
