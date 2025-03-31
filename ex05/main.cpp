#include "Harl.hpp"

int main()
{
    Harl    harl;

    std::cout << "Hello! My name is Harl and I just LOOOOVEEE complaining!!!! Let me show you." << std::endl;
    std::cout << "Complaint level ----DEBUG----:" << std::endl;
    harl.complain("DEBUG");
    std::cout << "Complaint level ----INFO----:" << std::endl;
    harl.complain("INFO");
    std::cout << "Complaint level ----WARNING----:" << std::endl;
    harl.complain("WARNING");
    std::cout << "Complaint level ----ERROR----:" << std::endl;
    harl.complain("ERROR");
    std::cout << "Complaint level ----INVALID----:" << std::endl;
    harl.complain("INVLAID");
    return 0;
}