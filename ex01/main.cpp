#include "Zombie.hpp"

int main()
{
    Zombie  *horde;
    Zombie  *anotherHorde;

    horde = zombieHorde(3, "Horde");
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Zombie " << i + 1 << ": ";
        horde[i].announce();
    }

    anotherHorde = zombieHorde(5, "anotherHorde");
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Another zombie " << i + 1 << ": ";
        anotherHorde[i].announce();
    }

    delete[] horde;
    delete[] anotherHorde;

    return 0;
}