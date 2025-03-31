#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
        std::cout << "Error: Invalid arguments." << std::endl;
    else
    {
        std::ifstream file(argv[1]);
        if (!file.is_open())
        {
            std::cout << "Error: File doesn't exist or can't be opened." << std::endl;
            return 1;
        }
        std::ofstream newFile("newfile.txt");
        if (!newFile.is_open())
        {
            std::cout << "Error: Couldn't create new file." << std::endl;
            return 1;
        }
        std::string line;
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        while (std::getline(file, line))
        {
            std::istringstream iss(line);
            std::string word;
            std::string newLine;
            while (iss >> word)
            {
                if (word == s1)
                    word = s2;
                if (!newLine.empty())
                    newLine += " ";
                newLine += word;
            }
            newFile << newLine << std::endl;
        }
        file.close();
        newFile.close();
    }
}