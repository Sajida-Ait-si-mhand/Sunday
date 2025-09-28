#include <iostream>

int main()
{
	try{
		int age = 18;
		if (age <= 11)
		{
			std::cout << "Mineur" << age << std::endl;
		}
		else {
			throw(age);
		}
	}
	catch (int age)
	{
		std::cout << "Majeur" << age << std::endl ;
	}
}