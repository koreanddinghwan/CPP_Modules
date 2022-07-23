#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <exception>
#include <stdexcept>
#include <sstream>

class Converter
{
	private:
		char *av;
		char *endp;
		double f;
	public:
		Converter(void);
		Converter(char *av);
		Converter(const Converter& copy);
		Converter& operator=(const Converter &copy);
		~Converter();
	public:
		void print(void) const;
	private:
		const std::string getchar(void) const;
		const std::string getint(void) const;
		const std::string getfloat(void) const;
		const std::string getdouble(void) const;
};

#endif
