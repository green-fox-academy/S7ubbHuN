#include <iostream>
#include <string>
#include <vector>

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


int main()
{
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }

    // connection

 /*       SerialPortWrapper *serial = new SerialPortWrapper("COM4", 115200);
        serial->openPort();
        string line;
        while(1){
        serial->readLineFromPort(&line);
        if (line.length() > 0){
        cout << line << endl;
        }
        }
        serial->closePort();
 */

    menu();

    return 0;
}









