// write a program that prints an integer number.
#include <stdio.h>
int main()
{
    int num_1 = 10;
    printf("the is number is %d\n", num_1);
}
/*Derived data types are types that are built from the basic data types (such as int, float, char, etc.) by applying certain operators or by combining them in different ways. Derived data types are used to store collections or groups of data and are essential in managing complex data structures in programming.

Here are some common derived data types:

1. Array
An array is a collection of elements of the same data type stored in contiguous memory locations.
Example: An array of integers.
c
Copy code
int arr[5] = {1, 2, 3, 4, 5};  // Array of 5 integers
Arrays allow for easy indexing and manipulation of large sets of similar data items.

2. Pointer
A pointer is a variable that stores the memory address of another variable.
Example:
c
Copy code
int x = 10;
int *p = &x;  // p is a pointer to an integer, holding the address of x
Pointers are powerful and allow for dynamic memory management, passing by reference, and efficient data access.
3. Structure (Struct)
A structure is a user-defined data type that groups different types of variables under one name.
Example:
c
Copy code
struct Person {
    char name[50];
    int age;
    float height;
};
Structures allow you to store different types of data (like name, age, and height) under a single entity (like Person).
4. Union
A union is similar to a structure, but in a union, all members share the same memory location, meaning only one member can hold a value at any time.
Example:
c
Copy code
union Data {
    int i;
    float f;
    char str[20];
};
A union saves memory as only the largest data type inside the union occupies space at any time.
5. Function
A function can also be considered a derived data type in the sense that it operates on basic or derived types and can return values of a specific type.
Example:
c
Copy code
int add(int a, int b) {
    return a + b;
}
6. Enumeration (Enum)
An enum is a user-defined data type consisting of a set of named integer constants, making the program more readable.
Example:
c
Copy code
enum Days { MONDAY, TUESDAY, WEDNESDAY };
Enumerations provide a way to work with named constants in a more readable way.
Derived data types are essential for creating complex data structures and are widely used in modern programming to handle different kinds of data efficiently.
*/