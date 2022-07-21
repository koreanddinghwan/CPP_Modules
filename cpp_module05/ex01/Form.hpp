#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool is_signed;
		const unsigned int sign_perm;
		const unsigned int exec_perm;
	public:
		Form(void);
		Form(const std::string name, bool is_signed, const unsigned int sign_perm, const unsigned int exec_perm);
		Form(const Form &copy);
		Form& operator=(const Form &copy);
		~Form(void);
	public:
		const std::string getName(void) const;
		bool getSigned(void) const;
		unsigned int getSignPerm(void) const;
		unsigned int getExecPerm(void) const;
		void beSigned(const Bureaucrat &bure);

	class GradeTooHighException : public std::exception 
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream &os, const Form form);

#endif
