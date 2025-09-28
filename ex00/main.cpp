#include "Bureaucrat.hpp"

int main()
{
    // try
    // {
    //     Bureaucrat obj("Alx", 21);
    //     std::cout << obj << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }   
    // try
    // {
    //     Bureaucrat obj("Juan", 0);
    //     std::cout << obj << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }   
    // try
    // {
    //     Bureaucrat obj("Juan", 1);
    //     std::cout << obj << std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }   
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
    return 0;
}