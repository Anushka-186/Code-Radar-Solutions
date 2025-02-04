#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int strings;
    scanf("%s", &strings);
    printf("You entered: %s", strings);
    return 0;
}