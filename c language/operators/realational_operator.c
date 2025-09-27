#include<stdio.h>


int main() {
    float num;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    // Extract the whole number part by casting to an integer
    int num1 = (int)num;

    // Check if the whole number part is even or odd
    if (num1 % 2 == 0)
        printf("%d is even.\n", num1);
    else
        printf("%d is odd.\n", num1);

    // Print the floating-point number with its decimal part
    printf("%.2f is the floating-point number.\n", num);

    // Check if the number is negative
    if (num < 0)
        printf("%.2f is a negative number.\n", num);
    else 
        printf("%.2f is a positive number.");

    return 0;
}