#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    
    // Corrected condition
    if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0)) {
        printf("Leap Year");
    } else { 
        printf("Not a Leap Year");
    }

    return 0;
}
