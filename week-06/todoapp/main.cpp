#include <iostream>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>


class Commands {



};

class Menu {

    public:
        void menu() {
            std::cout <<
             "                 TO-DO Application" <<
             "\n             ----------------------" <<
             "\n  How to use: command task" <<
             "\n             ----------------------" <<
             "\n  Commands:\n" <<
             "\n  -a      Adds a new task" <<
             "\n  -l      Lists all the tasks" <<
             "\n  -e      Empty the list" <<
             "\n  -rm     Removes a task" <<
             "\n  -f      Flags a task complete" <<
             "\n  -uf     Removing the flag from a task" <<
             "\n  -p      Add priority to a task" <<
             "\n  -lp     Lists all the tasks by priority" <<
             "\n             ----------------------" <<
             "\n  exit    Exits from the calculator and writes everything to file" <<
             "\n  clear   Clears the screen" <<
             "\n  help    Lists the menu again" <<
             "\n             ----------------------\n\n";
        }
};

class Input: public Commands {
    public:
        void set_input() {
            std::cout << "Please, enter your command: ";
            std::getline(std::cin, this->input);
        }
        std::string get_input() {
            return input;
        }

        void tokenizer() {
            std::string delimiter = " ";
            size_t current;
            size_t next = -1;
            current = next + 1;
            next = input.find_first_of(delimiter, current);
            command_token = input.substr(current, next - current);
            //std::cout << command_token << std::endl;
            task = input.substr(next - current + 1);
            //std::cout << task << std::endl;
         }

    protected:
        std::string input;
        std::string command_token;
        std::string task;


};




int main()
{
    Menu mn;
    Input i;
    mn.menu();
    i.set_input();

    //std::cout << i.get_input() << std::endl;

    i.tokenizer();



    return 0;
}
