#include "Harl.hpp"

int    levelToInt(std::string level)
{
    if (level == "DEBUG")
        return 1;
    else if (level == "INFO")
        return 2;
    else if (level == "WARNING")
        return 3;
    else if (level == "ERROR")
        return 4;
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        std::cout << "Invalid arguments. Please provide a complaint level and try again." << std::endl;
    else
    {
        Harl    harl;
        int level = levelToInt(argv[1]);
        switch(level)
        {
            case 1:
                harl.complain("DEBUG");
                harl.complain("INFO");
                harl.complain("WARNING");
                harl.complain("ERROR");
                break ;
            case 2:
                harl.complain("INFO");
                harl.complain("WARNING");
                harl.complain("ERROR");
                break ;
            case 3:
                harl.complain("WARNING");
                harl.complain("ERROR");
                break ;
            case 4:
                harl.complain("ERROR");
                break ;
            default:
                std::cout << "[ Probably complaining about insignificant problems. ]" << std::endl;
        }
    }
}