#include "Harl.hpp"

int main(int argc, char *argv[])
{   
    if (argc != 2)
        std::cout << "Invalid arguments. Please provide a complaint level and try again." << std::endl;
    else
    {
        Harl    harl;

        harl.complain(argv[1]);
    }
}