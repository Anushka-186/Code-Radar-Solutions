#include <stdio.h>

unsigned int flipBits(unsigned int n) {
    return ~n;  // Bitwise NOT operator flips all the bits
}

int main() {
    unsigned int num;

    // Get the input from the user
    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int flipped = flipBits(num);

    // Print the original and flipped values
    printf("Original number: %u\n", num);
    printf("Flipped number: %u\n", flipped);

    return 0;
}
