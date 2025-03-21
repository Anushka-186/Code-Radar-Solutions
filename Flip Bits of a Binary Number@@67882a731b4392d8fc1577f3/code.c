#include <stdio.h>

// Function to print the binary representation of a number
void printBinary(unsigned int num, int bitSize) {
    for (int i = bitSize - 1; i >= 0; i--) {
        // Check if the ith bit is 1 or 0
        if ((num >> i) & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main() {
    unsigned int num;
    int bitSize;

    // Input the decimal number and the bit size (e.g., 8, 16, 32)
    printf("Enter a number: ");
    scanf("%u", &num);
    
    printf("Enter the bit size (e.g., 8, 16, 32): ");
    scanf("%d", &bitSize);

    // Validate the bit size
    if (bitSize != 8 && bitSize != 16 && bitSize != 32) {
        printf("Invalid bit size. Supported sizes are 8, 16, and 32.\n");
        return 1;
    }

    // Perform the bitwise NOT operation (flip all bits)
    unsigned int flippedNum = ~num;

    // Output the original and flipped numbers in binary
    printf("Original number in binary: ");
    printBinary(num, bitSize);

    printf("Flipped number in binary: ");
    printBinary(flippedNum, bitSize);

    return 0;
}

