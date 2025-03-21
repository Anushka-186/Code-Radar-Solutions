#include <stdio.h>

int main() {
    unsigned int num;

    // Input the decimal number
    printf("Enter a number: ");
    scanf("%u", &num);

    // Perform the bitwise NOT operation (flip all bits)
    unsigned int flippedNum = ~num;

    // Output the flipped number's first bit (most significant bit of the flipped number)
    // We shift the flipped number to the right and check the first bit (MSB)
    printf("First bit of the flipped number: %u\n", flippedNum >> 31 & 1);

    return 0;
}

