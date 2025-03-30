#include "Zombie.hpp"

int main()
{
    Zombie* heapZombie = newZombie("heapZombie");
    randomChump("stackZombie");
    delete heapZombie;
    return (EXIT_SUCCESS);
}