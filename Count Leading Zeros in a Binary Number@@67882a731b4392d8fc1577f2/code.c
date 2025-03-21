#include <stdio.h>

int countLeadingZeroes(unsigned int n) {
    int count = 0;

    // Shift the number right until it becomes zero
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) {
            break;  // Stop as soon as we encounter a 1 bit
        }
        count++;
    }

    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int leadingZeroes = countLeadingZeroes(num);

    printf("%d\n", num, leadingZeroes);

    return 0;
}
