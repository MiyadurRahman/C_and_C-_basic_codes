#include <stdio.h>
int main() {
    char str1[100] = "My name";
    char str2[100] = "is meyad";
    char result[200]; // Make sure result is big enough
    int i = 0, j = 0;

    // Copy str1 to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Copy str2 to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0'; // Null-terminate

    printf("concatenated string: %s\n", result);
    return 0;
}
