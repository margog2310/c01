#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name): _name(name)
{
    announce();
}

void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " has been destroyed." << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}
