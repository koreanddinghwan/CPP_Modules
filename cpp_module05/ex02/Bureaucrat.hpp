#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Form;
#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string name;
		unsigned int grade;
		static const unsigned int MAXGRADE = 1;
		static const unsigned int MINGRADE = 150;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, const unsigned int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		~Bureaucrat(void);
	public:
		std::string getName(void) const;
		unsigned int getGrade(void) const;
		void increGrade(void);
		void decreGrade(void);
		void signForm(Form &form);
		void executeForm(Form const & form);
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &target);

#endif
