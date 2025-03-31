#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
    
        HumanA Bob = HumanA("Bob", club);
        Bob.attack();
        club.setType("some other type of club");
        Bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB Jim = HumanB("Jim");
        Jim.attack();
        Jim.setWeapon(club);
        Jim.attack();
        club.setType("some other type of club");
        Jim.attack();
    }
}