#include <stdio.h>

int main() {
    int num, n, bitValue;
    scanf("%d", &num);
    scanf("%d", &n);
    bitValue = (num >> n) & 1;
    printf("%d\n", n, bitValue);
    return 0;
}
