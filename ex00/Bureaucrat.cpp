#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->_name = "Default";
	this->_grade = 1;
}
Bureaucrat::Bureaucrat(const char* name, int grade) : _name(name)
{

}
const char* Bureaucrat::GradeTooHighException()::what() const throw()
{
	return("Grade to High");
}

const char* Bureaucrat::GradeTooLowException()::what() const throw()
{
	return("Grade to High");
}
void Bureaucrat::increment()
{
	if (this->_grade < 1)
		GradeTooHighException();
	else 
		this->_grade--;
}
void Bureaucrat::decrement()
{
	if (this->_grade > 150)
		GradeTooLowException();
	else 
		this->_grade++;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Doconstructor" << std::endl;
}