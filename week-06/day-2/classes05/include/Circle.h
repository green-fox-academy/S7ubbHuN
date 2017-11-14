#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
    public:
        Circle(float radius);
        virtual ~Circle();
        float get_circumference();
        float get_area();

    private:
        float radius;
        float circumference;
        float area;
};

#endif // CIRCLE_H
