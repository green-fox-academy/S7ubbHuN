#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t boolean_value_1:1;
    uint8_t boolean_value_2:1;
    uint8_t boolean_value_3:1;
    uint8_t boolean_value_4:1;
    uint8_t boolean_value_5:1;
    uint8_t boolean_value_6:1;
    uint8_t boolean_value_7:1;
    uint8_t boolean_value_8:1;
} Bitfield;

typedef struct {
    uint8_t boolean_value_1;
    uint8_t boolean_value_2;
    uint8_t boolean_value_3;
    uint8_t boolean_value_4;
    uint8_t boolean_value_5;
    uint8_t boolean_value_6;
    uint8_t boolean_value_7;
    uint8_t boolean_value_8;
} NotBitfield;

int main() {
    // TODO:
    // Print out the size of both structs (use sizeof() function)

    printf("Size of bitfield: %d\nSize of notbitfield: %d\n", sizeof(Bitfield), sizeof(NotBitfield));

    return 0;
}
