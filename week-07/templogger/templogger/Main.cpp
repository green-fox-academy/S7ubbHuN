#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <stdio.h>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <time.h>
#include "SerialPortWrapper.h"

using namespace std;

struct temprec {
	long timestamp;
	int temperature;
};

temprec stringcheck(string line) {
	int temperature;

	istringstream datastream(line);
	tm DateTime_check;
	datastream >> get_time(&DateTime_check, "%Y.%m.%d %H:%M:%S") >> temperature;
	if (datastream.fail()) {
		throw "Invalid string format!";
	}
    if (-273 > temperature || 1000 < temperature) {
		throw "Temperature is out of range!";
	}

	long timestamp = mktime(&DateTime_check);

	temprec rec;
	rec.temperature = temperature;
	rec.timestamp = timestamp;
	cout << rec.timestamp << " ::: " << rec.temperature << endl;
	return rec;
}


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

void list_data(vector<temprec> datas) {
    for (unsigned int i = 0; i < datas.size(); ++i) {
        cout << datas[i].timestamp << datas[i].temperature << endl;
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
    vector<temprec> datas;
    string user_input;
    string date, time;
//  int temperature;

    menu();


    while (user_input != "e") {
        getline(cin, user_input);
        if (user_input == "h") {
            menu();
        } else if (user_input == "o") {
            cout << "Port status: OPEN!" << endl;
            serial->openPort();
        } else if (user_input == "s") {
            cout << "Logging datas!" << endl;
            while(1) {
                serial->readLineFromPort(&line);
                if (line.length() > 0){
                    try {
                        datas.push_back(stringcheck(line));
                    }
                    catch (const char *exc) {
                        cout << "Error: " << line << endl;
                    }
            }
                if(kbhit()) {
                    if (getchar() == 's') {
                        cout << "Finished logging!" << endl;
                        break;
                    }
                }
            }
        } else if (user_input == "c") {
            cout << "Port status: CLOSED!" << endl;
            serial->closePort();
        } else if (user_input == "l") {
            list_data(datas);
        } else if (user_input == "e") {
            cout << "Good Bye!" << endl;
        } else {
            cout << "Not a valid command!" << endl;
        }
    }

    return 0;
}









