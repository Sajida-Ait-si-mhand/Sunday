#pragma once
#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm : public AForm {
	public:
		explicit ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	virtual ~ShrubberyCreationForm() throw();
	void executeAction() const;
};
