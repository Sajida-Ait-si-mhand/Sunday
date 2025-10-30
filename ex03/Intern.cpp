#include "Intern.hpp"
#include <iostream>
#include <stdexcept>

// Creator helper functions (C++98-friendly)
static AForm* createShrubbery(const std::string& target) {
    return new ShrubberyCreationForm(target);
}
static AForm* createRobotomy(const std::string& target) {
    return new RobotomyRequestForm(target);
}
static AForm* createPresidential(const std::string& target) {
    return new PresidentialPardonForm(target);
}

Intern::Intern() {}
Intern::Intern(const Intern& other) { (void)other; }
Intern& Intern::operator=(const Intern& other) { (void)other; return *this; }
Intern::~Intern() {}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
    const std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (*creators[3])(const std::string&) = {
        &createShrubbery,
        &createRobotomy,
        &createPresidential
    };

    for (int i = 0; i < 3; ++i) {
        if (names[i] == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return creators[i](target);
        }
    }

    std::cout << "Intern could not find the form: " << formName << std::endl;
    return NULL; // caller should check for nullptr
}
