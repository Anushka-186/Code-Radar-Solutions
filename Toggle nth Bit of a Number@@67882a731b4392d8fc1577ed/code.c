#include <stdio.h>

int main() {
    int num, n;

    // Input the number and the bit position
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0-based): ");
    scanf("%d", &n);

    // Create a mask with the n-th bit set to 1
    int mask = 1 << n;

    // Toggle the n-th bit using bitwise XOR
    num = num ^ mask;

    // Print the result after toggling the n-th bit
    printf("%d\n", n, num);

    return 0;
}
