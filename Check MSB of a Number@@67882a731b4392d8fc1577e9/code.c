#include <stdio.h>
#include <limits.h> // For the bit width of the system (e.g., 32-bit or 64-bit)

int main() {
    int num;
    scanf("%d", &num);
    int numBits = sizeof(num) * CHAR_BIT; 
    if (num == 0) {
        printf("Not Set");
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
