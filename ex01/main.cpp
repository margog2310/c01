#include "Zombie.hpp"

int main()
{
    int N;
    std::string name;

    std::cout << "Hello. I'm a Zombie Horde maker. Please specify how many zombies you'd like to create:" << std::endl;
    std::cin >> N;
    std::cout << "Thank you! What would you like to name your horde of zombies?" << std::endl;
    std::cin >> name;
    std::cout << "Thank you! Here's your brand new zombie Horde!" << std::endl;
    Zombie* horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        horde[i].announce();
    std::cout << "Ok cool, you've had your fun. Now all of these zombies shall die." << std::endl;
    delete[] horde;
    std::cout << "Ok byeeeee!!!!!" << std::endl;
}