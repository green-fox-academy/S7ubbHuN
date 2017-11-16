#include "commands.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>


Commands::Commands()
{


}

Commands::~Commands()
{
    //dtor
}

void user_input() {
    std::string user_input;
    std::cout << "Please, enter your command: ";
    std::getline(std::cin, user_input);
}

Menu::Commands {
    public:
        void menu() {
            std::cout << "                 TO-DO Application";
            std::cout << "\n             ----------------------";
            std::cout << "\n  How to use: command task";
            std::cout << "\n             ----------------------";
            std::cout << "\n  Commands:\n";
            std::cout << "\n  -a      Adds a new task";
            std::cout << "\n  -l      Lists all the tasks";
            std::cout << "\n  -e      Empty the list";
            std::cout << "\n  -rm     Removes a task";
            std::cout << "\n  -f      Flags a task complete";
            std::cout << "\n  -uf     Removing the flag from a task";
            std::cout << "\n  -p      Add priority to a task";
            std::cout << "\n  -lp     Lists all the tasks by priority";
            std::cout << "\n             ----------------------";
            std::cout << "\n  exit    Exits from the calculator and writes everything to file";
            std::cout << "\n  clear   Clears the screen";
            std::cout << "\n  help    Lists the menu again";
            std::cout << "\n             ----------------------\n";
            std::cout << "\t");
        //system("pause");
        }
};


