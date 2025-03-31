// C is a foundational programming language 
// Lets start with basics

// --------------------------------------------------
// Part 1 Basics (Variables, Operators, Input/Output)
// --------------------------------------------------

// -----------------------------------------------------------------------------------------
#include<stdio.h>    // header file / preprocessor directives for input/output operations
#include<conio.h>   // header file / preprocessor directives for input/output operations
// #include<string.h>  // header file / preprocessor directives for string operations
// #include<math.h>    // header file / preprocessor directives for mathematical operations
// #include<stdlib.h>  // header file / preprocessor directives for general utility functions
// #include<time.h>    // header file / preprocessor directives for time-related functions
// #include<ctype.h>   // header file / preprocessor directives for character classification functions
// #include<limits.h>  // header file / preprocessor directives for integer limits
// ------------------------------------------------------------------------------------------
int main() {

// ------------------------------------------------------------
// Variables
// Variables are used to store values in a program. In C, we use the keyword "int
// to declare an integer variable.
// special characters are not allowed
// variable name should not start with a number
// variable name should not contain special characters except underscore
 int a, b; // declare two integer variables
// ------------------------------------------------------------


// Assigning values to variables
 a = 10;  // variable a is assigned value 10
 b = 20;  // variable b is assigned value 20
// we can assign value to variable using = operator
// we can also assign value to variable using scanf() function
// scanf() function is used to get input from user
  

// ---------------------------------------------------------------------------------
// operator precedence is the order in which operators are executed when there are multiple operators in an expression
// operator precedence is as follows:
int x = 12 * 4/ 4;
int y = 1 * 4 / 5*3;
printf("%d",x);
printf("\n  %d",y);
// ---------------------------------------------------------------------------------

// 1. Parentheses ()
// 2. Exponents (**)
// 3. Multiplication (*)
int x = 12 * 4;
// 4. Division (/)
int x = 12 / 4;
// 5. Modulus (%)
int x = 12 % 4;
// 6. Addition (+)
int x = 12 + 4;
// 7. Subtraction (-)
int x = 12 - 4;
// 8. Assignment (=)
int x = 12 = 4;
// 9. Comparison (==, !=, >, <, >=, <=)
int x = 12 == 4;
int x = 12 != 4;
int x = 12 > 4;
int x = 12 < 4;
int x = 12 >= 4;
int x = 12 <= 4;
// 10. Logical AND (&&)
// 11. Logical OR (||)
// 12. Logical NOT (!)
// 13. Bitwise AND (&)
// 14. Bitwise OR (|)
// 15. Bitwise XOR (^)
// 16. Bitwise NOT (~)
// 17. Left Shift (<<)
// 18. Right Shift (>>)
// 19. Increment (++)
// 20. Decrement (--)
// 21. Ternary (?:)
// 22. Comma (,)
// 23. Assignment operators (+=, -=, *=, /=, %=, <<=, >>=
// 24. Bitwise operators (&, |, ^, ~)
// 25. Logical operators (&&, ||, !)
// 26. Comparison operators (==, !=, >, <, >=, <=)
// 27. Arithmetic operators (+, -, *, /, %, <<, >>, &, |,)
// ---------------------------------------------------------------------------------

printf("Hello, World!"); // prints "Hello, World!" to the console

// -------------------------------------------------------------------------------------
    // Use of escape sequence 
    printf("\nHello, World!\n"); // prints "Hello, World!" followed by a newline
    printf("\tHello, World!\n"); // prints "Hello, World!" followed by a tab
    // printf("Hello, World!\r"); // prints "Hello, World!" followed by a carriage
    // printf("Hello, World!\v"); // prints "Hello, World!" followed by a vertical
    // printf("Hello, World!\f"); // prints "Hello, World!" followed by a form
    // printf("Hello, World!\b"); // prints "Hello, World!" followed by a back
    // printf("Hello, World!\a"); // prints "Hello, World!" followed by a bell
// -------------------------------------------------------------------------------------


// ---------------------------------------------------------------
    // for displaying values of a variable
    //  %d is a format specifier for displaying integer
    //  %f is a format specifier for displaying float
    //  %c is a format specifier for displaying character
    //  %s is a format specifier for displaying string
    //  %x is a format specifier for displaying hexadecimal
// ---------------------------------------------------------------

// ------------------------
    printf("%d",a);
    // printf("%f",b);
    // printf("%c",c);
    // printf("%s",d);
// ------------------------


// ----------------------------------------------------------
    // Arithmetic operation using varibables a and b
    // addition of a and b
    printf("\nAddition of a and b is %d",a+b);
    // subtraction of a and b
    printf("\nSubtraction of a and b is %d",a-b);
    // multiplication of a and b
    printf("\nMultiplication of a and b is %d",a*b);
    // division of a and b
    printf("\nDivision of a and b is %d",a/b);
    // modulus of a and b
    printf("\nModulus of a and b is %d",a%b);
// ----------------------------------------------------------

    return 0; // returns 0 to indicate successful execution of the program
}



