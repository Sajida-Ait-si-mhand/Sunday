#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, int gradeSign, int gradeRequire, const std::string& target) : _name(name), _is_signed(false), _grade_sign(gradeSign), _grade_require(gradeRequire), _target(target)
{
    if (gradeSign < 1 || gradeRequire < 1)
        throw GradeTooHighException();
    if (gradeSign > 150 || gradeRequire > 150)
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("AForm Too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("AForm Too Low");
}

const char *AForm::NotSignedException::what() const throw()
{
    return ("AForm Not Signed");
}

const char *AForm::AlreadySignedException::what() const throw()
{
    return ("AForm Already Signed");
}


const std::string& AForm::getName() const { return this->_name; }
bool AForm::getIsSigned() const { return this->_is_signed; }
int AForm::getGradeSign() const { return this->_grade_sign; }
int AForm::getGradeRequire() const { return this->_grade_require; }

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (this->_is_signed)
        throw AlreadySignedException();
    if (bureaucrat.getGrade() <= this->_grade_sign)
        this->_is_signed = true;
    else
        throw GradeTooLowException();
}

const std::string &AForm::getTarget() const { return this->_target; }

void AForm::checkExecutionRequirements(const Bureaucrat& executor) const
{
    if (!this->_is_signed)
    {
        throw NotSignedException();
    }
    if(executor.getGrade() > _grade_require)
    {
        throw GradeTooLowException();
    }
}

void AForm::execute(Bureaucrat const & executor) const
{
    checkExecutionRequirements(executor);
    this->executeAction();
}

AForm::~AForm() throw()
{
    std::cout << "AForm Destructor Called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
    os << "Form Name: " << form.getName() << ", Is Signed: " << form.getIsSigned()
       << ", Grade Required to Sign: " << form.getGradeSign()
       << ", Grade Required to Execute: " << form.getGradeRequire();
    return os;
}
AForm &AForm::operator=(const AForm &other)
{
    if(this != &other)
    {
        this->_is_signed = other._is_signed;
    }
    return (*this);
}

