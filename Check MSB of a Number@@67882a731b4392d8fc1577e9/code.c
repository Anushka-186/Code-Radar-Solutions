#include <stdio.h>
#include <limits.h> // For the bit width of the system (e.g., 32-bit or 64-bit)

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate the bit width of the integer (typically 32 or 64 depending on the system)
    int numBits = sizeof(num) * CHAR_BIT;  // CHAR_BIT is 8, so this gives the number of bits in an integer
    
    // Shift the number to the most significant bit position
    if (num == 0) {
        printf("The most significant bit is not set (0).\n");
    } else {
        // Check the most significant bit
        if (num & (1 << (numBits - 1))) {
            printf("Set");
        } else {
            printf("Not Set");
        }
    }
    
    return 0;
}
