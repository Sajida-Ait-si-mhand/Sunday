#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"



RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45, target) 
{
	std::srand(std::time(nullptr));
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other)
{
}

// Assignment operator
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return *this;
}
	
void RobotomyRequestForm::executeAction() const
{
	std::cout << "NOISEE AAAAAA ....." << std::endl;

	if (std::rand() % 2 == 0)
	{
		std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
	}
	else
	{
		std::cout << "Robotomy failed on " << getTarget() << "." << std::endl;
	}
}
	
	
RobotomyRequestForm::~RobotomyRequestForm() throw() {}