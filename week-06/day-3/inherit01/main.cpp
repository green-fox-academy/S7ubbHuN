#include <iostream>
#include <vector>
#include <math.h>

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It should return the costs of the painting

class Shape {
    public:
        virtual void calc_area() = 0;
        void set_paint_price(float price) {
            this->price = price;
        }
        float how_much_to_paint() {
            return (price*area);
        }
        void get_area() {
            std::cout << "The area of the circle is: " << area << " and it will costs: " << how_much_to_paint() << "$ if the paint costs: " << price << "$/sqm." << std::endl;
        }
    private:
    protected:
        float area;
        float price;

};
class Circle: public Shape {
    public:
        void set_radius(float radius) {
            this->radius = radius;
            calc_area();
            }
    private:
        float radius;
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
    private:
        float a;
        float b;
        float c;
        float s;
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
    circle.set_paint_price(21.6);
    triangle.set_paint_price(15.6);

    circle.get_area();
    triangle.get_area();

    return 0;
}
