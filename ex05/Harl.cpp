#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::_debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
              << std::endl;
}

void    Harl::_info()
{
    std::cout << "I cannot believe having extra bacon costs more money. You didn't put enough bacon in my burger!"
              << std::endl;
}

void    Harl::_warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here last month."
              << std::endl;
}

void    Harl::_error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return ;
        }
    }
    std::cout << "Invalid level. Please choose again." << std::endl;
}