#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    int mask = ~(1 << n);
    if (num = num & mask) {
        printf("%d", n);
    }
    else {
        printf("5");
    }
    return 0;
}
