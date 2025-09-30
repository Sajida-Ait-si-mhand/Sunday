#pragma once 
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _is_signed;
        const int _grade_sign;
        const int _grade_require;
    public:
        Form(const std::string& name, int gradeSign, int gradeRequire);
        class GradeTooHighException : public std::exception {
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            const char* what() const throw();
        };
        // getters:
        const std::string& getName() const;
        const bool& getIsSigned() const;
        const int& getGradeSign() const;
        const int& getGradeRequire() const;
        
        Form& operator=(const Form& other);
        void BeSigned(const Bureaucrat& bureaucrat);
        ~Form();
};

std::ostream& operator<<(std::ostream& os, const Form& form);
