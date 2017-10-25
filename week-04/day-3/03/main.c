#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} point_t;

// TODO:
// Create a function the constructs a point
// It should take it's x and y coordinate as parameter

point_t p(int x, int y)
{
    point_t p;
    p.x = x;
    p.y = y;
    return p;
}

// TODO:
// Create a function that takes 2 Points as a pointer and returns the distance between them
double distance(point_t p1, point_t p2)
{
     return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}


int main()
{
    point_t p1 = {1, 2};
    point_t p2 = {10, 20};
    printf("%f", distance(p1, p2));
    return 0;
}
