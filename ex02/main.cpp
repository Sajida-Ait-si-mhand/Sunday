#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat alice("Alice", 1); 

        ShrubberyCreationForm shrubForm("home");
        RobotomyRequestForm robotForm("Bender");
        PresidentialPardonForm pardonForm("Marvin");

        shrubForm.beSigned(alice);
        robotForm.beSigned(alice);
        pardonForm.beSigned(alice);

        std::cout << "Executing ShrubberyCreationForm:" << std::endl;
        shrubForm.execute(alice);  

        std::cout << "\nExecuting RobotomyRequestForm (5 attempts):" << std::endl;
        for (int i = 0; i < 5; i++)
            robotForm.execute(alice);  

        std::cout << "\nExecuting PresidentialPardonForm:" << std::endl;
        pardonForm.execute(alice);  

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
