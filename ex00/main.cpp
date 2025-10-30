#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj("Abir", 151);
        std::cout << obj << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }   
      try
    {
        Bureaucrat obj("Abir", 0);
        std::cout << obj << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }  
    try{
        Bureaucrat ayoub("Lucifer", 1);
        std::cout << ayoub << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}