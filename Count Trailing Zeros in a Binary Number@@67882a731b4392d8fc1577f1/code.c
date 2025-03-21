#include <stdio.h>

int countTrailingZeroes(unsigned int n) {
    int count = 0;

    // Keep shifting the number to the right until the least significant bit is 1
    while ((n & 1) == 0 && n != 0) {
        count++;
        n >>= 1;  // Right shift the number by 1
    }

    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int trailingZeroes = countTrailingZeroes(num);

    printf("%d\n",trailingZeroes);

    return 0;
}
