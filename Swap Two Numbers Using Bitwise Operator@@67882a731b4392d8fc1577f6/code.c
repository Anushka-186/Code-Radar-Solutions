#include <stdio.h>

int main() {
    int a, b;

    // Input the two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Output before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // XOR swap
    a = a ^ b;  // Step 1: a = a ^ b
    b = a ^ b;  // Step 2: b = (a ^ b) ^ b => b = a
    a = a ^ b;  // Step 3: a = (a ^ b) ^ a => a = b

    // Output after swapping
    printf("After 
