#include <stdio.h>

int findLowestSetBitPosition(int n) {
    
    if (n == 0) {
        return -1; 
    }
    
    int position = 1; 
    
    while ((n & 1) == 0) {
        n >>= 1; 
        position++;
    }
    
    return position;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int position = findLowestSetBitPosition(num);
    
    if (position == -1) {
        printf("1");
    } else {
        printf("%d\n", position);
    }
    
    return 0;
}
