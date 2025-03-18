#include <stdio.h>

int main() {
    int num, n;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0-based): ");
    scanf("%d", &n);
    int mask = 1 << n;
    if (num = num ^ mask) {
        printf("%d", num);
    }
    else {
    printf("0");
    }

    return 0;
}
