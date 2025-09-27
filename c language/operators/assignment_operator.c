#include <stdio.h>
int main(){




    int a = 10; // Basic assignment: assigns 10 to a.
    int b = 5;

    // Display initial values.
    printf("Initial values: a = %d, b = %d\n", a, b);

    // Addition assignment.
    a += b; // Equivalent to a = a + b.
    printf("After a += b, a = %d\n", a);

    // Subtraction assignment.
    a -= b; // Equivalent to a = a - b.
    printf("After a -= b, a = %d\n", a);

    // Multiplication assignment.
    a *= b; // Equivalent to a = a * b.
    printf("After a *= b, a = %d\n", a);

    // Division assignment.
    a /= b; // Equivalent to a = a / b.
    printf("After a /= b, a = %d\n", a);

    // Modulus assignment.
    a %= b; // Equivalent to a = a % b.
    printf("After a %%= b, a = %d\n", a);

    return 0;
}


