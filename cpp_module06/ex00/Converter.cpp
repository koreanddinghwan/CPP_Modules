#include "Converter.hpp"

template <typename T>
std::string tostr(const T& t)
{ 
	std::ostringstream os;
	os<<t;
	return os.str(); 
};

template <>
std::string tostr<char>(const char& t)
{ 
	std::string rtn;

	rtn.push_back('\'');
	rtn.push_back(t);
	rtn.push_back('\'');
	return (rtn);
};

template <>
std::string tostr<float>(const float& t)
{ 
	std::ostringstream os;
	std::string rtn;
	os.unsetf(std::ios::floatfield);
	os.precision(std::numeric_limits<float>::digits10);
	os.setf(std::ios::showpoint);
	os<<t; //출력버퍼에 출력결과가 있음.
	os.setf(std::ios::fixed, std::ios::floatfield);
	rtn = os.str();//출력버퍼로부터 값 가져오기
	rtn.push_back('f');
	return rtn;
};

template <>
std::string tostr<double>(const double& t)
{ 
	std::ostringstream os;
	os.unsetf(std::ios::floatfield);
	os.precision(std::numeric_limits<double>::digits10);
	os.setf(std::ios::showpoint);
	os<<t;
	os.setf(std::ios::fixed, std::ios::floatfield);
	return os.str(); 
};

Converter::Converter(void) : av()
{
}

Converter::Converter(char *av) : av(av)
{
	try {
		f = std::strtod(av, &endp);
		if (std::isnan(f) && std::strlen(endp) != 0) //check nana nanf ....
			throw std::invalid_argument("Invalid Argument");
		else if (std::strlen(endp) != 0 && std::strcmp(endp ,"f") != 0 && std::strlen(av) > 1) //check invalid floating nums
			throw std::invalid_argument("Invalid Argument!");
		this->print();
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}
} 

Converter::Converter(const Converter& copy)
{
	(void)copy;
} 

Converter& Converter::operator=(const Converter &copy)
{
	(void)copy;
	return *this;
}

Converter::~Converter()
{}

void Converter::print(void) const
{
	std::cout<<"char: "<<getchar()<<std::endl;
	std::cout<<"int: "<<getint()<<std::endl;
	std::cout<<"float: "<<getfloat()<<std::endl;
	std::cout<<"double: "<<getdouble()<<std::endl;
}
 
const std::string Converter::getchar(void) const
{
	std::string rtn;

	if (std::isnan(f) || std::isinf(f))
		return "impossible";
	if (std::isalpha((av[0])))
		return (tostr(static_cast<int>(av[0])));
	if (!std::isprint(static_cast<char>(f)))
		return "Non displayable";
	return (tostr(static_cast<char>(f)));
}

const std::string Converter::getint(void) const
{
	std::string rtn;
	char *iendp;

	if (std::isnan(f) || std::isinf(f) || std::isalpha(av[0]))
		return "impossible";
	long int i = std::strtol(av, &iendp, 10);
	if (i > INT32_MAX || i < INT32_MIN) //overflowed, -2147483648 ~
		return "overflow";
	return (tostr(static_cast<int>(f)));
}

const std::string Converter::getfloat(void) const
{
	if (std::isnan(static_cast<float>(f)))
		return "nanf";
	if (std::isalpha(av[0]))
		return "impossible";
	if (isinf(f))
	{
		if (av[0] == '-')
			return "-inff";
		else
			return "+inff";
	}
	return (tostr(static_cast<float>(f)));
}

const std::string Converter::getdouble(void) const
{
	if (std::isnan(f))
		return "nan";
	if (std::isalpha(av[0]))
		return "impossible";
	if (isinf(f))
	{
		if (av[0] == '-')
			return "-inf";
		else
			return "+inf";
	}
	return (tostr(f));
}

