#pragma once 
#include <string>
#include <iostream>
#incldue <exception>

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const char *name, int grade);
		Bureaucrat(const &Bureaucrat other);
		Bureaucrat& operator=(const Bureaucrat& other);
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
		//

		const std::string getName();
		const int getGrade();

		~Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);