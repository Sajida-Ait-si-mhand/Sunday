#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {
	public:
		explicit RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		virtual ~RobotomyRequestForm() throw();
			void executeAction() const;
};	