
#include <iostream>
#include <exception>

class Myexception : public std::exception
{
private:
    std::string message;
public:
    explicit Myexception(const std::string &msg) : message(msg) {};
    const char* what() const throw()
    {
        return message.c_str();
    }
    virtual ~Myexception() throw(){}
};



int main() {
    try{
        throw Myexception("ERROR 404:(");
    }
    catch(const Myexception& e)
    {
        std::cout << "This is the exception:" << e.what() << std::endl;
    }
    return 0;
}