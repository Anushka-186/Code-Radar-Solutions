#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a = a ^ b;  // Step 1: a = a ^ b
    b = a ^ b;  // Step 2: b = (a ^ b) ^ b => b = a
    a = a ^ b;  // Step 3: a = (a ^ b) ^ a => a = b

    // Output after swapping
    printf("%d %d", a, b);

    return 0;
}