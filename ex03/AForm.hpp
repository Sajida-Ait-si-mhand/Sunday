#pragma once
#include <iostream>
#include <exception>
#include <string>

class Bureaucrat; 

class AForm
{
private:
    const std::string _name;
    bool _is_signed;
    const int _grade_sign;
    const int _grade_require;
    const std::string _target;

public:
    AForm(const std::string& name, int gradeSign, int gradeRequire, const std::string& target = "");
    virtual ~AForm() throw();

    void execute(Bureaucrat const & executor) const;

    class GradeTooHighException : public std::exception { public: const char* what() const throw(); };
    class GradeTooLowException  : public std::exception { public: const char* what() const throw(); };
    class NotSignedException    : public std::exception { public: const char* what() const throw(); };
    class AlreadySignedException: public std::exception { public: const char* what() const throw(); };

    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeSign() const;
    int getGradeRequire() const;
    const std::string& getTarget() const;

    void beSigned(const Bureaucrat& bureaucrat);
    AForm& operator=(const AForm& other);

protected:
    void checkExecutionRequirements(const Bureaucrat& executor) const;
    virtual void executeAction() const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);