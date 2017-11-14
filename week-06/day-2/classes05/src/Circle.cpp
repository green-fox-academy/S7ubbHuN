#include "Circle.h"

Circle::Circle(float radius)
{
    this->radius = radius;
}

Circle::~Circle()
{
    //dtor
}

float Circle::get_circumference() {
    circumference = radius * 2 * 3.14;
    return this->circumference;
}

float Circle::get_area() {
    area = radius * radius * 3.14;
    return this->area;
}
