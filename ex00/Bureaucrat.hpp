#pragma once 
#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
	public:
		Bureaucrat();
		//getName() and getGrade()
		void GradeTooHighException();
		void GradeTooLowException();
		void increment();
		void decrement();
		~Bureaucrat();
		
};

