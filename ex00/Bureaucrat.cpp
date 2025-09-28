#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() 
{
	this->_name = "Default";
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const char* name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	_grade = grade;
	std::cout << getName() << ", bureaucrat grade" << getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade){}


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
	if (this->_grade <= 1)
		GradeTooHighException();
	else 
		this->_grade--;
}

void Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		GradeTooLowException();
	else 
		this->_grade++;
}

const int Bureaucrat::getGrade()
{
	return(this->_grade);
}

const std::string Bureaucrat::getName()
{
	return(this->_name);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor" << std::endl;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
		_grade = other._grade;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}