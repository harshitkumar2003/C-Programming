//  ----------------------------------------------------------------------------------------
/*
===================================
* function in c programming
===================================

key points:
* 1. A function is a block of code that performs a specific task.
* 2. Functions help in code reusability and modular programming.
* 3. Functions can take parameters and return values.
* 4. Functions can be defined with or without return types.
* 5. Functions can be called from other functions or the main function.
* 6. Functions can be recursive, meaning they can call themselves.
* 7. Functions can be passed as arguments to other functions.
* 8. Functions can be overloaded, meaning multiple functions can have the same name with different parameters.
* 9. Functions can be inline, meaning they can be expanded in place to reduce function call overhead.
* 10. Functions can be static, meaning they can have internal linkage and are not visible outside their translation unit.
* 11. Functions can be extern, meaning they can have external linkage and are visible across translation units.
* 12. Functions can be defined in header files and included in multiple source files.
* 13. Functions can be defined in libraries and linked to programs at compile time or runtime.
* 14. Functions can be defined in different programming languages and called from C using foreign function interfaces (FFI).

syntax:
* return_type function_name(parameter_list) {
*     // function body
*     // code to be executed
*    return value; // optional
* }
*/ 
//  ----------------------------------------------------------------------------------------


//  ----------------------------------------------------------------------------------------
// Example : WAP to Print hello world and goodbye using two function (basic program of function)
// #include <stdio.h>
// void hello()
// {
//     printf("Hello World\n"); // Print "Hello World"    
//     goodbye(); // Call goodbye function
// }
// void goodbye()
//     printf("Goodbye\n"); // Print "Goodbye"    
// }
// int main()
// {
//     hello(); // Call hello function    
//     return 0; // Return success
// }
//  ----------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------
// Examole: WAP for adding GST in a product price using function
//  #include <stdio.h>
//  int price(float p) {
//      return p +  (p * 0.18); // Add 18% GST to the price
//  }
//  int main() {
//     float p ;         
//     printf("Enter the price of the product: "); // Prompt user for input
//     scanf("%f", &p);
//     float tatal_price = price(p); // Call the function to calculate total price
//     printf("Total price after adding GST: %.2f\n", tatal_price); // Print the total price
//     return 0; // Return success
//  }
// -------------------------------------------------------------------------------------------------
        
        
// -------------------------------------------------------------------------------------------------
// calculate the area of square of a number given by the user using function
//  #include <stdio.h>
// Function to calculate area of square
// int area_of_square(int side) {
//     return side * side; // Area = side^2
// }
// Main function
// int main() {
//     int  side;
//     printf("Enter the side of the square: ");
//     scanf("%d", &side);
//     printf("Area of square: %d\n", area_of_square(side));
// }
// -------------------------------------------------------------------------------------------------
            
            
// -------------------------------------------------------------------------------------------------
// Example: WAP to calculate the area of square,rectangle,circle of a number given by the user using function with switch case
// #include <stdio.h>
// #define PI 3.1416 // Define constant for PI
//  Functions to calculate area of square, rectangle and circle
// int area_of_square(int side) {
// return side * side; // Area = side^2
// }
// int area_of_rectangle(int length, int breadth) {
// return length * breadth; // Area = length * breadth
// }
// float area_of_circle(float radius) {
// return PI * radius * radius; // Area = π * radius^2
// }

// Main function
// int main() {
// int choice, side, length, breadth, radius;
// printf("Enter your choice between 1 to 3:\n");
// printf("1. Square\n");
// printf("2. Rectangle\n");
// printf("3. Circle\n");
// printf("Enter your choice: ");
// scanf("%d", &choice);
// switch (choice) {
// case 1:
// printf("Enter the side of the square: ");
// scanf("%d", &side);
// printf("Area of square: %d\n", area_of_square(side));
// break;
// case 2:
// printf("Enter the length of the rectangle: ");
// scanf("%d", &length);
// printf("Enter the breadth of the rectangle: ");
// scanf("%d", &breadth);
// printf("Area of rectangle: %d\n", area_of_rectangle(length, breadth));
// break;
// case 3:
// printf("Enter the radius of the circle: ");
// scanf("%d", &radius);
// printf("Area of circle: %f\n", area_of_circle(radius));
// break;
// default:
// printf("Invalid choice\n");
// }
// return 0;
// }
// -------------------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------------------
// Example: WAP to convert temperature from Celsius to Fahrenheit and vice versa using function with switch case
//  #include <stdio.h>
//  int celsius_to_fahrenheit(int celsius) {
//     return (celsius * 9/5) + 32; // Convert Celsius to Fahrenheit
//  }
//     int fahrenheit_to_celsius(int fahrenheit) {
//         return (fahrenheit - 32) * 5/9; // Convert Fahrenheit to Celsius
//     }
//     // Main function
//     int main() {
//         int choice, temp;
//         printf("Temperature Converter\n");
//         printf("Press 1 for Celsius to Fahrenheit\n");
//         printf("Press 2 for Fahrenheit to Celsius\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//             case 1:
//                 printf("Enter temperature in Celsius: ");
//                 scanf("%d", &temp);
//                 printf("Temperature in Fahrenheit: %d\n", celsius_to_fahrenheit(temp));
//                 break;
//             case 2:
//                 printf("Enter temperature in Fahrenheit: ");
//                 scanf("%d", &temp);
//                 printf("Temperature in Celsius: %d\n", fahrenheit_to_celsius(temp));
//                 break;
//             default:
//                 printf("Invalid choice\n");
//         }
//         return 0; // Return success
//     }
// -------------------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------------------
// Example: WAP to calculate the percentage of marks of 5 subjects a using function 
// #include<stdio.h>
// int percentage(int marks[], int n) {
//     int sum = 0; // Initialize sum to 0
//     for(int i = 0; i < n; i++) {
//         sum = sum + marks[i]; // Add each subject's marks to sum
//     }
//     return (sum / n); // Calculate and return percentage
// }
// Main function
// int main() {
//     int n = 6; // Number of subjects
//     int marks[6]; // Array to store marks of 5 subjects
//     printf("Enter marks for 5 subjects:\n");
//     for(int i = 0; i < 6; i++) {
//         printf("Subject %d: ", i + 1); // Prompt user for each subject's marks
//         scanf("%d", &marks[i]); // Read marks into array
//     }
//     printf("Percentage: %d%%\n", percentage(marks, n)); // Call function and print percentage
//     return 0; // Return success
// }
// -------------------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------------------
// Example: WAP to print sum of digits of a number using function
//  #include <stdio.h>
// Function to calculate sum of digits of a number
//  int sum_of_digits(int num) {
    //     if (num == 0) { // Base case: if number is 0, return 0
    //         return 0;
    //     } else {
    //         return (num % 10) + sum_of_digits(num / 10); // Recursive call: add last digit and call function with remaining digits
    //     }
    // }
// Main function
// int main() {
//     int number;
//     printf("Enter a number: "); // Prompt user for input
//     scanf("%d", &number); // Read the number
//     int sum = sum_of_digits(number); // Call function to calculate sum of digits
//     printf("Sum of digits of %d is: %d\n", number, sum); // Print the result
//     return 0; // Return success
// }
// -------------------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------
// Example: WAP to print the square root of a number using function
// #include <stdio.h>
// #include <math.h> // Include math library for sqrt function
// // Function to calculate square root of a number
//  double square_root(double num) {
//         if (num < 0) { // Check if the number is negative
//             printf("Error: Negative number\n"); // Print error message
//             return -1; // Return -1 for error
//         }
//         if (num == 0 || num == 1) { // Base case: square root of 0 or 1 is itself
//             return num;
//         }
//         // Calculate square root using sqrt function from math library
//     return sqrt(num); // Return square root of the number
//  }
// // Main function
//  int main() {
// int number;
//    printf("Enter a number: "); // Prompt user for input
//    scanf("%d", &number); // Read the number
//     double squareRootResult = square_root(number); // Call function to calculate square root
//     printf("Square root of %d is: %.2lf\n", number, squareRootResult); // Print the result
//     return 0; // Return success
//  }
// -------------------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------
// Example: WAP to print Hot and Cold depends on the temperature user input using function
#include <stdio.h>
// -------------------------------------------------------------------------------------------------



// -------------------------------------------------------------------------------------------------
/*
====================================
* Recursion in C Programming
===================================
 
* Recursion is a process where a function calls itself directly or indirectly.
* It is used to solve problems that can be broken down into smaller, similar sub-problems.

* Key Points:
* 1. A recursive function must have a base case to terminate the recursion.
* 2. Each recursive call should progress towards the base case.
* 3. Recursion can be memory-intensive due to the function call stack.
* 4. Recursive functions can be less efficient than iterative solutions for some problems.
* 5. Recursion is often used in algorithms like sorting, searching, and tree traversal.
* 6. Recursive functions can be used to solve problems like factorial, Fibonacci series, and more.

* Advantages of Recursion:
* - Simplifies code for problems like tree traversal, factorial, Fibonacci, etc.
* - Makes the code easier to read and maintain for certain problems.

* Disadvantages of Recursion:
* - Can lead to stack overflow if the base case is not defined or reached.
* - May be less efficient than iterative solutions due to overhead of function calls.

* Tips:
* - Always define a clear base case.
* - Use recursion only when it simplifies the problem.

* Syntax:
* return_type function_name(parameters) {
*     if (base_case_condition) {
    *         return base_case_value;
    *     } else {
        *         // Recursive call
        *         return function_name(modified_parameters);
        *     }
        * }
 */
//  ----------------------------------------------------------------------------------------


//  ----------------------------------------------------------------------------------------
// Example: WAP to Print Hello World using Recursion
// #include <stdio.h>
// Function to print "Hello World"
// void printHello(int n) {
//     if (n > 0) { // Base case
//         printf("Hello World\n"); // Print message
//         printHello(n - 1); // Recursive call with decremented value
//     }
// }
// Main function
// int main() {
//     int n = 5; // Number of times to print
//     printHello(n); // Call the recursive function
//     return 0; // Return success
// }
//  ----------------------------------------------------------------------------------------


//  ----------------------------------------------------------------------------------------
// Example: WAP to Print the sum of n natural numbers using Recursion
//  #include <stdio.h>
// Function to calculate the sum of n natural numbers using recursion
// int sum(int n) {
//     if (n > 0) { // Base case
//         return n + sum(n - 1); // Recursive call
//     } else {
//         return 0; // Return 0 when n is 0
//     }
//     }
// Main function
// int main() {
//     int n;
//     printf("Enter a number: "); // Prompt user for input
//     scanf("%d", &n); // Read the number
//     int result = sum(n); // Call the recursive sum function
//     printf("Sum of first %d natural numbers is: %d\n", n, result); // Print the result
//     return 0; // Return success
// }
//  ----------------------------------------------------------------------------------------
            

//  ----------------------------------------------------------------------------------------
// Example: WAP to Print the sum of two numbers using Recursion
// #include <stdio.h>
// // Function to calculate the sum of two numbers using recursion
//  int sum(int a, int b) {
//      if (b == 0) { // Base case: when b reaches 0, return a oit means a is now the sum    
//          return a; // Return the first number
//      } else {
//          return sum(a + 1, b - 1); // Recursive call: increment a and decrement b    
//         //  a is incremented by 1 and b is decremented by 1 until b becomes 0
//      }
//  }
// Main function
//  int main() {
//      int num1, num2; // Declare two integers
//      printf("Enter two numbers: "); // Prompt user for input
//      scanf("%d %d", &num1, &num2); // Read two integers from user    
//      int result = sum(num1, num2); // Call the recursive sum function
//      printf("Sum of %d and %d is: %d\n", num1, num2, result); // Print the result
//      return 0; // Return success
//  }
//  ----------------------------------------------------------------------------------------

            
//  ----------------------------------------------------------------------------------------
// Example: Factorial of a Number
// Factorial of a number using recursion
// #include <stdio.h>
// Recursive function to calculate factorial
// int factorial(int n) { //function definition
//     if (n == 0 || n == 1) { // Base case
//         return 1; // Factorial of 0 or 1 is 1
//     } else {
//         return n * factorial(n - 1); // Recursive call
//     }
// }    
// Main function
// int main() {
//     int num = 1;
//     printf("Factorial of %d is %d\n", num, factorial(num));
//     return 0;
// }    
// ----------------------------------------------------------------------------------------
        
        
// ----------------------------------------------------------------------------------------
// Example: Fibonacci Series
//  #include <stdio.h>
// Recursive function to calculate nth Fibonacci number
//  int fibonacci(int n) {
//      if (n == 0) { // Base case
//          return 0;
//      } else if (n == 1) { // Base case    
//          return 1;
//      } else {
//          return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
//      }
//  }
//  Main function          
//  int main() {
//      int terms;
//      printf("Fibonacci series up to %d terms: ", terms);        
//      scanf("%d", &terms);
//      for (int i = 0; i < terms; i++) {
//          printf("%d ", fibonacci(i));
//      }    
//      return 0;
//  }
// -------------------------------------------------------------------------------------------------
