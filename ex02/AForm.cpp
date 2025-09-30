#include "Form.hpp"
#include "AForm.hpp"


Form::Form(const std::string& name, int gradeSign, int gradeRequire) : _name(name), _is_signed(false), _grade_sign(gradeSign), _grade_require(gradeRequire)
{
    if (gradeSign < 1 || gradeRequire < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeRequire > 150)
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form Too Low");
}

const std::string& Form::getName() const {
    return(this->_name);
}

const bool& Form::getIsSigned() const 
{
    return(this->_is_signed);
}

const int& Form::getGradeSign() const
{
    return (this->_grade_sign);
}   

const int& Form::getGradeRequire() const
{
    return (this->_grade_require);
}

void Form::BeSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_grade_sign)
        this->_is_signed = true;
    else
        throw GradeTooLowException();
}

const std::string &Form::getTarget() const
{
    // TODO: insert return statement here
}

Form::~Form()
{
    std::cout << "Form Destructor Called" << std::endl;
}

// for << operator overload
std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form Name: " << form.getName() << ", Is Signed: " << form.getIsSigned()
       << ", Grade Required to Sign: " << form.getGradeSign()
       << ", Grade Required to Execute: " << form.getGradeRequire();
    return os;
}
// assignment operator
Form &Form::operator=(const Form &other)
{
    if(this != &other)
    {
        this->_is_signed = other._is_signed;
    }
    return (*this);
}
