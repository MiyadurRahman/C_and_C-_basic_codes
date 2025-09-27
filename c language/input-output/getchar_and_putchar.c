#include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    character = getchar();  // Reads a single character
    printf("You entered: ");
    putchar(character);  // Outputs the character
    return 0;
}