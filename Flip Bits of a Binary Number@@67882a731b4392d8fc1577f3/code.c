#include <stdio.h>

// Function to print binary representation of a number
void printBinary(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        // Check if the ith bit is 1 or 0
        if ((n >> i) & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

// Function to flip all bits using bitwise NOT
unsigned int flipBits(unsigned int n) {
    return ~n;  // Flip all bits using bitwise NOT operator
}

int main() {
    unsigned int num;

    // Get the input from the user
    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int flipped = flipBits(num);

    // Output the original and flipped binary values
    printf("Original number in binary: ");
    printBinary(num);
    
    printf("Flipped number in binary: ");
    printBinary(flipped);

    return 0;
}

