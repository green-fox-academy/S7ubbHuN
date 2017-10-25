#include <stdio.h>

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  enum CarType type;
  double km;
  double gas;
};
void printcar (struct Car type);

// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main()
{

    struct Car volvo = {VOLVO, 100, 50};
    struct Car toyota = {TOYOTA, 200, 60};
    struct Car land_rover = {LAND_ROVER, 300, 70};
    struct Car tesla = {TESLA, 100};

    printcar(tesla);

    return 0;
}

void printcar (struct Car type)
{
    switch(type.type) {
    case VOLVO:
        printf("Type: %d, km: %.f, gas: %.f\n", type.type, type.km, type.gas);
        break;
    case TOYOTA:
        printf("Type: %d, km: %.f, gas: %.f\n", type.type, type.km, type.gas);
        break;
    case LAND_ROVER:
        printf("Type: %d, km: %.f, gas: %.f\n", type.type, type.km, type.gas);
        break;
    case TESLA:
        printf("Type: %d, km: %.f\n", type.type, type.km);
        break;
    }
}

