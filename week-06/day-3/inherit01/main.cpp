#include <iostream>
#include <vector>
#include <math.h>

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)
class Shape {
    public:
        virtual void calc_area() = 0;
    private:
    protected:
};
class Circle: public Shape {
    public:
        void set_radius(float radius) {
            this->radius = radius;
            calc_area();
            }
        void get_area() {
            std::cout << "The area of the circle is: " << area << std::endl;
        }
   private:
        float radius;
        float area;
    protected:
        void calc_area() {
            this->area = radius*radius*3.14;
        }
};
class Triangle: public Shape {
    public:
        void set_sides(float a, float b, float c) {
            this->a = a;
            this->b = b;
            this->c = c;
            calc_area();

        }
        void get_area() {
            std::cout << "The area of the triangle is: " << area << std::endl;
        }
    private:
        float a;
        float b;
        float c;
        float s;
        float area;
    protected:
        void calc_area() {
            this->s = (float)(a+b+c) / 2;
            this->area = sqrt(s*(s-a)*(s-b)*(s-c));

        }
};



int main()
{
    Circle circle;
    Triangle triangle;
    circle.set_radius(10);
    triangle.set_sides(2, 3, 4);

    circle.get_area();
    triangle.get_area();

    return 0;
}
