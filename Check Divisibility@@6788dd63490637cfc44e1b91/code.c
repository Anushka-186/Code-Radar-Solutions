#include <stdio.h>

int main() {
    int div;
    scanf("%d", &div);
    if (div%5==0 && div%11==0) {
        printf("Divisible");
    }
    else {
        printf("Not Divisible");
    }
    return 0;
}
