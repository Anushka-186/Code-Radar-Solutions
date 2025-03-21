#include <stdio.h>

unsigned int setNthBit(unsigned int num, int n) {
    // Create a mask by left-shifting 1 to the nth position
    unsigned int mask = 1 << n;
    
    // Perform the bitwise OR operation to set the nth bit to 1
    return num | mask;
}

int main() {
    unsigned int num;
    int n;
    scanf("%u", &num);
   
    scanf("%d", &n);

    unsigned int result = setNthBit(num, n);

    // Output the result
    printf("%u\n",result);

    return 0;
}
