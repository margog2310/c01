#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
    std::cout << "Human B " << _name << " has been spawned." << std::endl
              << _name << " is currently unarmed" << std::endl;
}

void    HumanB::attack()
{
    if (_weapon)
        std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " is currently unarmed and can't attack." << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

HumanB::~HumanB() {}