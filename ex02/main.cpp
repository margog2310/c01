#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* strPTR = &str;
    std::string&    strREF = str;

    std::cout << "This is your string's memory address: " << &str << std::endl
              << "This is the memory address held by the pointer to the string: " << strPTR << std::endl
              << "This is the memory address held by the reference to the string: " << &strREF << std::endl;
    std::cout << "This is your string: " << str << std::endl
              << "This is the value the pointer is pointing to: " << *strPTR << std::endl
              << "This is the value the reference is pointing to: " << strREF << std::endl;
}