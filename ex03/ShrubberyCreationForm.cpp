#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <stdexcept>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreation", 145, 137, target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() throw() {}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other)
{
}

// Assignment operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    return *this;
}



void ShrubberyCreationForm::executeAction() const
{
    std::string filename = getTarget() + "_shrubbery";

    std::ofstream ofs(filename.c_str());
    if (!ofs.is_open())
        throw std::runtime_error("ShrubberyCreationForm: cannot open file: " + filename);

    ofs <<
        "       _-_\n"
        "    /~~   ~~\\\n"
        " /~~         ~~\\\n"
        "{               }\n"
        " \\  _-     -_  /\n"
        "   ~  \\ \\ //  ~\n"
        "_- -   | | _- _\n"
        "  _ -  | |   -_\n"
        "      // \\\\n+";

    ofs.close();
}
