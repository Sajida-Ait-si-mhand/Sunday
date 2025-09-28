#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->_grade = 1;
}

void Bureaucrat::GradeTooHighException()
{
	std::cout << "Grade to High" << std::endl;
}

void Bureaucrat::GradeTooLowException()
{
	std::cout << "Grade to Low" << std::endl;
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