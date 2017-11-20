#include <iostream>
#include <stdexcept>


// Create a function which throws an integer
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws

void throw_int (int b) {
    if (b == 0){
        throw 10;
    }
}

void throw_char (int b) {
    if (b == 0){
        throw 'x';
    }
}

void throw_runtime (int b) {
    if (b == 0){
        throw std::runtime_error ("you can not divide by zero!");
    }
}




int main()
{
    try {
        int a = 0;
        int b = 0;
        std::cin >> a;
        std::cin >> b;
        throw_int(b);
        throw_char(b);
        throw_runtime(b);
        int c = a/b;
        std::cout << c;
    }
    catch(...) {
        std::cout << "blablabla";
    }
    return 0;
}
