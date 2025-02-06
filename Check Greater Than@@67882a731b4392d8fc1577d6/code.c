#include <stdio.h>
int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) ==2){
        if (a>b) {
            printf("True\n");
        }
    } else {
        printf("False\n")
    }
    return 0;
}