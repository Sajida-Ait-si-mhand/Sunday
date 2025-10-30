#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
//    try {
//     Bureaucrat high("High", 0);
//    }
//    catch (std::exception &e){
//         std::cout << "Nop: " << e.what() << std::endl;
//    }

//     try {
//         Bureaucrat errorHigh("ErrorHigh", 0);
//     } catch (std::exception &e) {
//         std::cout << "Exception (too high): " << e.what() << std::endl;
//     }

//     try {
//         Bureaucrat errorLow("ErrorLow", 151);
//     }
//     catch (std::exception &e) {
//         std::cout << "Exception (too low): " << e.what() << std::endl;
//     }
  
//     try {
//         Bureaucrat Form1("sajda ", 12);
//     }
//     catch(std::exception &e)
//     {
//         std::cout << "Sjda" << e.what() << std::endl;
//     }
//     try {
        
//         Form f1("Form1", 1, 1);
//         std::cout << f1 << std::endl;
//     } 
//     catch (std::exception &e) {
//         std::cout << "Form boundary test failed: " << e.what() << std::endl;
//     }

//     try {
//         Form f1("Form2", 1, 150);
//         std::cout << f1 << std::endl;
//     } catch (std::exception &e) {
//         std::cout << "Form boundary test failed: " << e.what() << std::endl;
//     }

//     try {
//         Form f2("sajida", 0, 10);
//     } catch (std::exception &e) {
//         std::cout << "Form Exception (grade too high): " << e.what() << std::endl;
//     }

//     // Test Form grade too low
//     try {
//         Form f3("Form3", 10, 151);
//     } catch (std::exception &e) {
//         std::cout << "Form Exception (grade too low): " << e.what() << std::endl;
//     }

    std::cout << "----- Signing Tests -----" << std::endl;
    //  NMXIW L RBAT

    // try {
    //     Bureaucrat sajida("DreamTeam", 3);
    //     Form vollyrabat("vollyrabat", 3, 3);
    //     sajida.signForm(vollyrabat);
    //     std::cout << vollyrabat << std::cout;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cout << "RESULTS" << e.what() << std::endl;
    // }
    // // Test failed signing (grade too low)

    //  Manmxiwx L RBAT
    // try 
    // {
    //     Bureaucrat DreamTeam("rank", 2);
    //     Form vollyrabat("vollyrabat", 3, 1);
    //     DreamTeam.signForm(vollyrabat);
    //     std::cout << vollyrabat << std::endl;
    // }
    // catch(const std::exception& e){
    //     std::cout << "RESULTS" << e.what() << std::endl;
    // }


    // try {
    //     Bureaucrat max("Max", 2);
    //     max.increment();
    //     std::cout << max << std::endl;
    //     max.increment(); // Should throw (already at 1)
    // } catch (std::exception &e) {
    //     std::cout << "Increment test exception: " << e.what() << std::endl;
    // }

    // Zaid fer9a

    // try {
    //     Bureaucrat Dreamteam("DreamTeam", 4);
    //     Dreamteam.increment();
    //     std::cout << Dreamteam << std::cout;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cout << "RESULTS" << e.what() << std::endl;
    // }
    // // na9is fr9a 
    // try{
    //     Bureaucrat DreamTeam("DreamTeam", 3);
    //     Form Rabat("VollyRabat", 3, 2);
    //     DreamTeam.decrement();
    //     std::cout << DreamTeam << std::endl;
    // } catch(const std::exception& e)
    // {
    //     std::cout << "RESULTS" << e.what()  << std::endl;
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
    // } 
    // catch (std::exception &e) {
    //     std::cout << "Double sign test exception: " << e.what() << std::endl;
    // }
    try {   
        Bureaucrat Sport("Volly", 1);
        Form volly("Volly", 12, 1);
        Sport.signForm(volly);
        Sport.signForm(volly);
    }  catch (const std::exception& e){
        std::cout << "RESULTS" << e.what() << std::endl;
    }
    return 0;
}