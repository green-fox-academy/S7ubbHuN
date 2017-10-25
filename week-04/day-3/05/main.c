#include <stdio.h>

// TODO:
// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
struct Houses {
    char address[100];
    float price;
    int rooms;
    float area;
};

//strcpy(house1.address, "address");

// TODO:
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a pointer to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

float worth_to_buy (struct Houses, house)
{
    if ((price/area)<400) {
        printf("It's worth to buy!");
    }

}

// TODO:
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.

int main()
{

    struct Houses house1 = {"Gergely utca 118", 12000, 4, 35};

    return 0;
}
