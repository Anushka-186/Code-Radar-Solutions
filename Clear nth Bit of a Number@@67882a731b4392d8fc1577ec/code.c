#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    int mask = ~(1 << n);
    if (num = num & mask) {
        printf("6");
    }
    else {
        printf("5");
    }
    return 0;
}
