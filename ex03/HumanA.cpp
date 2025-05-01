#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{
    std::cout << "Human A " << _name << " has been spawned." << std::endl
              << _name << " is armed with a " << _weapon.getType() << std::endl;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}

HumanA::~HumanA() {}