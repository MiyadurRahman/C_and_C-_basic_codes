#include <iostream>
using namespace std;

int main() {
    int a = 10; // Basic assignment: assigns 10 to a.
    int b = 5;

    // Display initial values.
    cout << "Initial values: a = " << a << ", b = " << b << endl;

    // Addition assignment.
    a += b; // Equivalent to a = a + b.
    cout << "After a += b, a = " << a << endl;

    // Subtraction assignment.
    a -= b; // Equivalent to a = a - b.
    cout << "After a -= b, a = " << a << endl;

    // Multiplication assignment.
    a *= b; // Equivalent to a = a * b.
    cout << "After a *= b, a = " << a << endl;

    // Division assignment.
    a /= b; // Equivalent to a = a / b.
    cout << "After a /= b, a = " << a << endl;

    // Modulus assignment.
    a %= b; // Equivalent to a = a % b.
    cout << "After a %= b, a = " << a << endl;

    return 0;
}
