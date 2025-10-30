#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Intern someIntern;

    AForm* form1 = someIntern.makeForm("shrubbery creation", "garden");
    if (form1) {
        std::cout << "Form created: " << form1->getName() << std::endl;
        delete form1;
    }

    AForm* form2 = someIntern.makeForm("robotomy request", "Bender");
    if (form2) {
        std::cout << "Form created: " << form2->getName() << std::endl;
        delete form2;
    }

    AForm* form3 = someIntern.makeForm("presidential pardon", "Marvin");
    if (form3) {
        std::cout << "Form created: " << form3->getName() << std::endl;
        delete form3;
    }

    AForm* form4 = someIntern.makeForm("unknown form", "target");
    if (!form4) {
        std::cout << "Failed to create unknown form" << std::endl;
    }

    return 0;
}
