#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <stdio.h>

#include "SerialPortWrapper.h"

using namespace std;

void menu() {

    cout
    << "  Temperature Logger Application\n"
    << "  ==============================\n"
    << "  Commands:\n"
    << "  h        Show command list\n"
    << "  o        Open port\n"
    << "  s        Start logging / Stop logging\n"
    << "  c        Close port\n"
    << "  l        List after error handling\n"
    << "  e        Exit from the program\n"
    << endl;
}

void list_data(vector<string> datas) {
    for (int i = 0; i < datas.size(); ++i) {
        cout << datas.at(i) << endl;
    }
}



int main()
{
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }
    SerialPortWrapper *serial = new SerialPortWrapper("COM4", 115200);

    string line;
    vector<string> datas;
    string user_input;

    menu();

    while (user_input != "e") {
        getline(cin, user_input);
        if (user_input == "h") {
            menu();
        } else if (user_input == "o") {
            serial->openPort();
        } else if (user_input == "s") {
            while(1) {
                    serial->readLineFromPort(&line);
                    if (line.length() > 0){
                        datas.push_back(line);
                    }
                    if(kbhit()) {
                        if (getchar() == 's') {
                        break;
                        }
                    }
                }
        } else if (user_input == "c") {
            serial->closePort();
        } else if (user_input == "l") {
            list_data(datas);
        }
    }

    return 0;
}









