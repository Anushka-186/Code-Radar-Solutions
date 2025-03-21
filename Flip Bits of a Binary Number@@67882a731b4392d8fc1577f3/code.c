#include <stdio.h>

unsigned int flipBits(unsigned int n) {
    return ~n;  // Bitwise NOT operator flips all the bits
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    unsigned int flipped = flipBits(num);
    printf("%u\n", flipped);

    return 0;
}
