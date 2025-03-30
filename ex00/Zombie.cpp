#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{   
    std::cout << "A new zombie has been created. Its name is " << _name << std::endl;
}

void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " has been destroyed." << std::endl;
}
