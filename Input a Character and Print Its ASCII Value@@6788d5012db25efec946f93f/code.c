#include <stdio.h>

int main()
{
    char inputCharacter;
    printf("Enter a character: ");
    scanf(" %c", &inputCharacter);
    printf("ASCII Value: %d\n", (int)inputCharacter);
    return 0;
}