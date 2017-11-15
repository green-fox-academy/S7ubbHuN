#include <iostream>
#include <vector>


// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called travelling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.

class Human {
    public:
        virtual void travelling() {
            std::cout << "Human is walking." << std::endl;
        }
    private:
    protected:


};
class SuperHuman: public Human {
    public:
        void travelling() {
            std::cout << "SuperHuman is flying." << std::endl;
        }
    private:
    protected:


};
class AquaHuman: public Human {
    public:
        void travelling() {
            std::cout << "AquaHuman is riding with dolphins." << std::endl;
        }
    private:
    protected:


};



int main()
{

    Human h;
    SuperHuman sh;
    AquaHuman ah;

    h.travelling();
    sh.travelling();
    ah.travelling();
    h.travelling();

    return 0;
}
