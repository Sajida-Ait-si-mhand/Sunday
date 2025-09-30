#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
//    try {
//     Bureaucrat high("High", 0);
//    }catch (std::exception &e){
//         std::cout << "Nop: " << e.what() << std::endl;
//    }

//     // Test Bureaucrat grade too high
//     try {
//         Bureaucrat errorHigh("ErrorHigh", 0);
//     } catch (std::exception &e) {
//         std::cout << "Exception (too high): " << e.what() << std::endl;
//     }

//     // Test Bureaucrat grade too low
//     try {
//         Bureaucrat errorLow("ErrorLow", 151);
//     } catch (std::exception &e) {
//         std::cout << "Exception (too low): " << e.what() << std::endl;
    // }
    // try {
    //     Bureaucrat Form1("sajda", 1);
    // }catch(std::exception &e)
    // {
    //     std::cout << "Sjda" << e.what()<< std::endl;
    // }
    // // Test Form grade boundaries
    // try {
    //     Form f1("Form1", 1, 1);
    //     std::cout << f1 << std::endl;
    // } catch (std::exception &e) {
    //     std::cout << "Form boundary test failed: " << e.what() << std::endl;
    // }

    // try {
    //     Form f1("Form2", 1, 150);
    //     std::cout << f1 << std::endl;
    // } catch (std::exception &e) {
    //     std::cout << "Form boundary test failed: " << e.what() << std::endl;
    // }
    // Test Form grade too high
    // try {
    //     Form f2("sajida", 0, 10);
    // } catch (std::exception &e) {
    //     std::cout << "Form Exception (grade too high): " << e.what() << std::endl;
    // }

    // // Test Form grade too low
    // try {
    //     Form f3("Form3", 10, 151);
    // } catch (std::exception &e) {
    //     std::cout << "Form Exception (grade too low): " << e.what() << std::endl;
    // }

    // // Test successful signing
    // try {
    //     Bureaucrat bob("Bob", 5);
    //     Form f4("Form4", 10, 10);
    //     bob.signForm(f4); // Should succeed
    //     std::cout << f4 << std::endl;
    // } catch (std::exception &e) {
    //     std::cout << "Sign test failed: " << e.what() << std::endl;
    // }

    // // Test failed signing (grade too low)
    // try {
    //     Bureaucrat alice("Alice", 50);
    //     Form f5("Form5", 10, 10);
    //     alice.signForm(f5); // Should fail
    //     std::cout << f5 << std::endl;
    // } catch (std::exception &e) {
    //     std::cout << "Sign test failed: " << e.what() << std::endl;
    // }

    // // Test increment/decrement
    // try {
    //     Bureaucrat max("Max", 2);
    //     max.increment(); // Should succeed (becomes 1)
    //     std::cout << max << std::endl;
    //     max.increment(); // Should throw (already at 1)
    // } catch (std::exception &e) {
    //     std::cout << "Increment test exception: " << e.what() << std::endl;
    // }

    // try {
    //     Bureaucrat min("Min", 149);
    //     min.decrement(); // Should succeed (becomes 150)
    //     std::cout << min << std::endl;
    //     min.decrement(); // Should throw (already at 150)
    // } catch (std::exception &e) {
    //     std::cout << "Decrement test exception: " << e.what() << std::endl;
    // }

    // // Try signing form that is already signed
    // try {
    //     Bureaucrat john("John", 1);
    //     Form f6("Form6", 10, 10);
    //     john.signForm(f6); // Should succeed
    //     john.signForm(f6); // Should be already signed (depending on your logic, may print again)
    // } catch (std::exception &e) {
    //     std::cout << "Double sign test exception: " << e.what() << std::endl;
    // }
    try
    {
        Bureaucrat b1("b1", 1);
        Bureaucrat b2("b1", 1);

        Form f2("b2", 12, 12);
        Form f1("sjd", 1, 150);
        // b1.signForm(f1);
        b2.signForm(f2);
        
        // std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
    } catch (std::exception &e)
    {
        std::cout << "Failed" << std::endl;
    }
    
    return 0;
}