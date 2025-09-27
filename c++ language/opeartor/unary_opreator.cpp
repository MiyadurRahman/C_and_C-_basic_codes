#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 3;
    int c;

    // Using increment operators.
    c = ++a; // Prefix increment: c = 6, a = 6
    cout << "Prefix increment: c = " << c << ", a = " << a << endl;

    c = b++; // Postfix increment: c = 3, b = 4
    cout << "Postfix increment: c = " << c << ", b = " << b << endl;

    // Using decrement operators.
    c = --a; // Prefix decrement: c = 5, a = 5
    cout << "Prefix decrement: c = " << c << ", a = " << a << endl;

    c = b--; // Postfix decrement: c = 4, b = 3
    cout << "Postfix decrement: c = " << c << ", b = " << b << endl;

    // Using unary minus and plus.
    c = -a; // Unary minus: c = -5
    cout << "Unary minus: c = " << c << endl;

    c = +b; // Unary plus: c = 3
    cout << "Unary plus: c = " << c << endl;

}