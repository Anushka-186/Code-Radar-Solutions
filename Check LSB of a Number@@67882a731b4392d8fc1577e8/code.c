// Your code here...#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the least significant bit is set (1) or not (0)
    if (num & 1) {
        printf("The least significant bit is set (1).\n");
    } else {
        printf("The least significant bit is not set (0).\n");
    }

    return 0;
}
