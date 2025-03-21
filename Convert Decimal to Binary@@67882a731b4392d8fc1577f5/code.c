#include <stdio.h>

// Function to print the binary representation of a number
void printBinary(unsigned int n) {
    int i;
    
    // Loop through each bit from the most significant bit (MSB)
    for (i = 31; i >= 0; i--) {
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
    int num;
    scanf("%u", &num);
    printBinary(num);

    return 0;
}
