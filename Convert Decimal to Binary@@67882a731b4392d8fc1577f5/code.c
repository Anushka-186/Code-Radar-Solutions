#include <stdio.h>

// Function to print the binary representation of a number (3 bits)
void printBinary(unsigned int n) {
    int i;
    
    // Loop through the first 3 bits (bit 2 to bit 0)
    for (i = 2; i >= 0; i--) {
        // Shift the bit at the i-th position to the least significant bit (LSB)
        // and check if it's 1 or 0
        if ((n >> i) & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    printBinary(num);

    return 0;
}

