#include <iostream>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <windows.h>

class Tasks {

    public:
        Tasks(std::string task){
            this->task = task;
        }
        void set_task (std::string task) {
            this->task = task;
        }
        std::string get_task () {
            return task;
        }
        void set_priority (unsigned int priority) {
            this->priority = priority;
        }
        unsigned int get_priority () {
            return priority;
        }
        void set_complete_flag (std::string complete_flag) {
            this->complete_flag = complete_flag;
        }
        std::string get_complete_flag () {
            return complete_flag;
        }
    protected:
        std::string task;
        std::string complete_flag;
        unsigned int priority;
};

class Commands {
    public:
        void menu();
        void command();
        void add_task();
        void write_to_file();
        void read_from_file();
        void list_task();
        void remove_task();
        //void completes_task();
        //void priority_to_task();
        //void list_task_by_priority();
        void cycle();

    private:
         std::vector <Tasks> todos;

};

void Commands::menu() {
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

void Commands::add_task() {
    std::string user_input;
    getline(std::cin, user_input);
    todos.push_back(user_input);
}

void Commands::write_to_file() {
    std::ofstream outfile;
    outfile.open("todos.txt");

    outfile << "No. | Task name | Task priority | Done? |" << std::endl;
    for(unsigned int i = 0; i < todos.size(); i++){
        outfile << i+1 << "\t" << todos.at(i).get_task() << "\t" << todos.at(i).get_complete_flag() << "\t" << todos.at(i).get_priority() << "\t" << std::endl;
    }
    outfile.close();
}

void Commands::read_from_file() {
    std::ifstream infile;
    infile.open("todos.txt");

    //std::cout << "List tasks by number" << std::endl;
    //std::cout << "No. | Task name | Task priority | Done? |" << std::endl;
    for(unsigned int i = 0; i < todos.size(); i++){
        std::cout << i+1 << "\t" << todos.at(i).get_task() << "\t" << todos.at(i).get_complete_flag() << "\t" << todos.at(i).get_priority() << "\t" << std::endl;
    }
    infile.close();
}

void Commands::list_task() {
    std::cout << "List tasks by number" << std::endl;
    std::cout << "No. | Task name | Task priority | Done? |" << std::endl;
    for(unsigned int i = 0; i < todos.size(); i++){
        std::cout << i+1 << "\t" << todos.at(i).get_task() << "\t" << todos.at(i).get_complete_flag() << "\t" << todos.at(i).get_priority() << "\t" << std::endl;
    }

}

void Commands::remove_task() {
    unsigned int size1 = 0;
    unsigned int task_number;
    std::cin >> task_number;
    std::cout << std::endl;

    size1 = todos.size();

    if(!std::cin || size1 < task_number || 1 > task_number){
        std::cout << "Not a valid task number!" << std::endl;
        std::cin.clear();
    } else {
        todos.erase(todos.begin() + task_number - 1);
        //todos.resize(size1 - 1);
    }
}

/*void Commands::completes_task()
{
    string yes = yes;
    int user_input;
    cin >> user_input;
    cout << endl;

    int size1 = storage.size();
    if(!cin || size1 < user_input || 1 > user_input){
        cout << "Give in a valid number!" << endl;
        cin.clear();
    } else{
        storage.at(user_input-1).set_done(yes);
    }
}*/

/*void Commands::priority_to_task()
{
    int user_input;
    int user_input2;
    cin >> user_input;
    cout << endl;

    int size1 = storage.size();
    cin >> user_input;
    if(!cin || size1 < user_input || 1 > user_input){
        cout << "Give in a valid number!" << endl;
        cin.clear();
    } else{
        cout << "Give in a number for priority:";
        cin >> user_input2;
        if(!cin || size1 < user_input || 1 > user_input){
            cout << "Give in a valid number!" << endl;
            cin.clear();
        }else{
            storage.at(user_input-1).set_prio(user_input2);
        }
    }

}*/

/*void Commands::list_tasks_priority()
{
    for(unsigned int i = 0; i < storage.size(); i++){
        if(storage.at(i).get_prio() > storage.at(i+1).get_prio()){
            int temp;
            temp = storage.at(i).get_prio();
            storage.at(i).get_prio() = storage.at(i+1).get_prio();
            storage.at(i+1).get_prio() = temp;
        } else {
            cout << "List already listed by priority." << endl;
        }
    }

}*/


void Commands::cycle(){
    std::string command;

    do {
        read_from_file();
        std::cin >> command;
        if (command.compare("exit") == 0) {
                std::cout << "The program is exiting now. Goodbye!";
                exit(0);
            } else if (command.compare("clear") == 0) {
                system("cls");
            } else if (command.compare("help") == 0) {
                menu();
            } else if (command.compare("-l") == 0) {
                list_task();
            } else if (command.compare("-a") == 0) {
                add_task();
                write_to_file();
            } else if (command.compare("-e") == 0) {

            } else if (command.compare("-rm") == 0) {
                remove_task();
                write_to_file();
            } else if (command.compare("-f") == 0) {

                write_to_file();
            } else if (command.compare("-uf") == 0) {

                write_to_file();
            } else if (command.compare("-p") == 0) {

                write_to_file();
            } else if (command.compare("-lp") == 0) {

                write_to_file();
            } else {
                std::cout << "Wrong task name. Look at the possible tasks again." << std::endl;
            }

    } while (command != "exit");

}

int main()
{
    Commands c;
    c.menu();
    c.cycle();


    return 0;
}
