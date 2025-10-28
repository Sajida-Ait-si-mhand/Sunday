#pragma once 
#include <iostream>
#include <exeception>
#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string _name;
        bool _is_signed;
        const int _grade_sign;
        const int _grade_require;
        const std::string _target;
    public:
        AForm(const std::string& name, int gradeSign, int gradeRequire);
        class GradeTooHighException : public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            const char* what() const throw();
        };
        class NotSignedException : public std::exception {
            const char* what() const throw();
        }
        // getters:
        const std::string& getName() const;
        const bool& getIsSigned() const;
        const int& getGradeSign() const;
        const int& getGradeRequire() const;
        const std::string &getTarget() const;

        AForm& operator=(const AForm& other);
        void BeSigned(const Bureaucrat& bureaucrat);

        // pure
        virtual void execute(Bureaucrat const & executor) const = 0;
        ~AForm();
    protected:
        void checkExecutionRequirements(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);
