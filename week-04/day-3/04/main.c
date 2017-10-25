#include <stdio.h>
#include <math.h>

struct rectangular_cuboid {
    double a;
    double b;
    double c;
};

// TODO:
// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
double GetSurface(struct rectangular_cuboid c1)
{
    return (2*c1.a*c1.b + 2*c1.a*c1.c + 2*c1.b*c1.c);
}

// TODO:
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume
double GetVolume(struct rectangular_cuboid c1)
{
    return (c1.a*c1.b*c1.c);
}

int main()
{
    struct rectangular_cuboid c1 = {2.5, 3.5, 4.5};

    printf("a = %f, b = %f, c = %f\n", c1.a, c1.b, c1.c);
    printf("The surface of the cuboid is: %f\n", GetSurface(c1));
    printf("The volume of the cuboid is: %f", GetVolume(c1));

    return 0;
}
