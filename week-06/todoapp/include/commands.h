#ifndef COMMANDS_H
#define COMMANDS_H
#include <iostream>
#include <vector>
#include <fstream>
#include <string>



class Commands {
    public:
        Commands();
        virtual ~Commands();


    protected:
        std::string user_input;

    private:
};

class Menu: public Commands {
    public:
        void menu();
};

#endif // COMMANDS_H
