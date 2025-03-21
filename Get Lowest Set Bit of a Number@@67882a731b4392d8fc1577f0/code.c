#include <stdio.h>

int findLowestSetBitPosition(int n) {
    if (n == 0) {
        return -1; // No set bits, return -1
    }
    
    // Using the expression (n & -n) to isolate the lowest set bit
    int position = 0;
    
    // Loop to find the position of the lowest set bit
    while ((n & 1) == 0) {
        n >>= 1;  // Right shift the number to check the next bit
        position++;
    }
    
    return position; // Return the position of the lowest set bit (0-based)
}

int main() {
    int num;
    scanf("%d", &num);
    
    int position = findLowestSetBitPosition(num);
    
    if (position == -1) {
        printf("No set bits (1s) found in the number.\n");
    } else {
        printf("%d\n", position);
    }
    
    return 0;
}
