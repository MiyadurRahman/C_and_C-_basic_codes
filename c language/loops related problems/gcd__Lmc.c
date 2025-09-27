#include <stdio.h>

int main() {
    int num1, num2, n1, n2;

   
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    n1 = num1;
    n2 = num2;

    // Euclidean Algorithm for GCD
    for (int remainder = 0; n2 != 0; remainder = n1 % n2) {
        n1 = n2;
        n2 = remainder;
    }
     int gcd=n1;
    // Print the GCD
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
