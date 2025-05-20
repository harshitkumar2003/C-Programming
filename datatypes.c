// In C, data types are used to define the type of data that a variable can store. The language provides several basic and derived data types, which can be categorized as follows:

// 1. Basic Data Types:
// These are the fundamental types that define the size and type of data a variable can hold.
// ----------------------------------------------------------------------------
// Integer Types: Used for whole numbers (positive, negative, or zero).
// int: Typically used for integers. Size: 4 bytes (on most systems).
// short: Shorter integer (less memory). Size: 2 bytes.
// long: Larger integer. Size: 4 or 8 bytes, depending on the system.
// long long: Even larger integer. Size: 8 bytes.
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// Character Types: Used for storing characters.
// char: Used to store a single character (like 'A', 'b', etc.). Size: 1 byte.
// unsigned char: Used to store a non-negative character value (0 to 255).
// signed char: Specifies the storage of signed character values (like positive and negative).
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// Floating Point Types: Used for storing decimal numbers (real numbers).
// float: Single-precision floating point. Size: 4 bytes.
// double: Double-precision floating point. Size: 8 bytes.
// long double: Extended precision floating point. Size: 8 bytes or more (depending on the system).
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// 3. Derived Data Types:
// These are formed from the basic data types and include pointers, arrays, structures, and unions.

// Arrays: Collection of elements of the same data type.
int arr[10];  // Array of 10 integers
char str[20]; // Array of 20 characters (string)
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// Pointers: Variables that store the address of another variable.
int *ptr;  // Pointer to an integer
char *str_ptr; // Pointer to a character
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// Structures (struct): A user-defined data type that groups related variables of different types.
struct Person {
    char name[50];
    int age;
    float height;
};
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// Unions (union): A user-defined data type that allows storing different data types in the same memory location.
union Data {
    int i;
    float f;
    char str[20];
};
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// 4. Void Type:
// void: Represents the absence of a value or type. It is used for functions that do not return a value and for pointers that point to an unknown data type.
// Functions with a void return type do not return any value.
// void *: A generic pointer type.
void printHello() {
    printf("Hello, World!\n");
}
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// 5. Enumerated Type (enum):
// enum: A user-defined type that consists of named integer constants.
enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// 6. Typedef:
// typedef: Used to define new names (aliases) for existing types. It can make complex data types easier to work with.
typedef unsigned long ulong;
ulong num = 123456789;
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
// 7. Size of Data Types in C:
// The size of each data type can vary depending on the architecture of the system (e.g., 32-bit vs. 64-bit systems). However, the typical sizes on most systems are:

// char: 1 byte
// short: 2 bytes
// int: 4 bytes
// long: 4 or 8 bytes (depending on system)
// long long: 8 bytes
// float: 4 bytes
// double: 8 bytes
// long double: 8 bytes or more
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
#include <stdio.h>
int main() {
    int a = 10;        // Integer
    float b = 3.14;    // Floating-point number
    char c = 'A';      // Character
    double d = 5.6789; // Double-precision floating point
    unsigned int e = 100; // Unsigned integer

    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);
    printf("d = %.4f\n", d);
    printf("e = %u\n", e);

    return 0;
}
Output:
a = 10
b = 3.14
c = A
d = 5.6789
e = 100
// ----------------------------------------------------------------------------

// ==========================
//     datatypes finished
// ==========================
