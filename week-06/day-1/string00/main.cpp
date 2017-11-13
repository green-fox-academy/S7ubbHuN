#include <iostream>

using namespace std;

// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Do you like coffee? (as a boolen variable)
//
//  Example output:
//  John Doe
//  31
//  Likes coffee: true

int main()
{
    string name = "Balazs Sass";
    int age = 31;
    bool coffee = true;

    cout << "Hello " << name << "!" << endl;
    cout << "You are " << age << " years old!" << endl;
    if (coffee) {
        cout << "Likes coffee: True!" << endl;
    }



    return 0;
}
