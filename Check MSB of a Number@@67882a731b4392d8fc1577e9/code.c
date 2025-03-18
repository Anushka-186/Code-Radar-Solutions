// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check if the least significant bit is set (1) or not (0) using bitwise operators
    if (num & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
