#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

const std::string& Weapon::getType() const
{
    const std::string& typeREF = _type;
    return (typeREF);
}

void    Weapon::setType(const std::string& type)
{
    _type = type;
}

Weapon::~Weapon() {}