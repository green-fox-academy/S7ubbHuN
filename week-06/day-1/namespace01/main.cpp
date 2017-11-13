#include <iostream>

// Make it work, without using namespace globally

int main()
{
    using std::cout;
    using std::endl;

    cout << "Hello world!" << endl;
    return 0;
}
