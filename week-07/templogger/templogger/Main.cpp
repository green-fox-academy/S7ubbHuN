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

void list_data() {


}



int main()
{
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }

    // connection

        SerialPortWrapper *serial = new SerialPortWrapper("COM4", 115200);
 //       serial->openPort();
        string line;
 //       while(1){
 //           serial->readLineFromPort(&line);
 //           if (line.length() > 0){
 //               cout << line << endl;
 //           }
 //       }
 //       serial->closePort();





    menu();
    vector<string> datas;
    char user_input;

    while (user_input != 'e') {
        cin >> user_input;
        switch(user_input) {
            case 'h' : menu();
                break;
            case 'o' : serial->openPort();
                break;
            case 's' :
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
                break;
            case 'c' : serial->closePort();
                break;
            case 'l' : list_data();
                for (int i = 0; i < datas.size(); ++i) {
                    cout << datas.at(i) << endl;
                }
                break;
            //case 'e' : exit(0);
        }
    }

    return 0;
}









