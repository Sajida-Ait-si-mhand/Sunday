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
		Bureaucrat(const char *name, int grade);
		//getName() and getGrade()
		class GradeTooHighException : public std::exception 
		{
			public:
				const char* what() const throw();
		}
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		}
		void increment();
		void decrement();
		~Bureaucrat();
		
};

