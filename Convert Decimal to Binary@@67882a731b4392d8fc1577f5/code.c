#include <stdio.h>

// Function to print the binary representation of a number based on bit size
void printBinary(unsigned int n, int bitSize) {
    // Loop through each bit, from most significant to least significant
    for (int i = bitSize - 1; i >= 0; i--) {
        // Shift the bit at position i to the rightmost position and check if it's 1 or 0
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
    int bitSize;

    // Get the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%u", &num);

    // Get the bit size from the user (e.g., 8, 16, 32, 64)
    printf("Enter the bit size (e.g., 8, 16, 32, 64): ");
    scanf("%d", &bitSize);

    // Validate the bit size
    if (bitSize != 8 && bitSize != 16 && bitSize != 32 && bitSize != 64) {
        printf("Invalid bit size. Supported sizes are 8, 16, 32, and 64.\n");
        return 1; // Exit the program if bit size is invalid
    }

    // Print the binary representation based on the given bit size
    printf("Binary representation of %u in %d bits: ", num, bitSize);
    printBinary(num, bitSize);

    return 0;
}
