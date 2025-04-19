// --------------------------------------------------------------------------------------
/*
 * Recursion in C Programming
 *
 * Recursion is a process where a function calls itself directly or indirectly.
 * It is used to solve problems that can be broken down into smaller, similar sub-problems.
 *
 * Key Points:
 * 1. A recursive function must have a base case to terminate the recursion.
 * 2. Each recursive call should progress towards the base case.
 * 3. Recursion can be memory-intensive due to the function call stack.

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
// Example 1: WAP to Print hello world and goodbye using two function (basic program of function)
// #include <stdio.h>
// void hello()
// {
//     printf("Hello World\n"); // Print "Hello World"
//     goodbye(); // Call goodbye function
// }
// void goodbye()
// {
    //     printf("Goodbye\n"); // Print "Goodbye"
    // }
    // int main()
// {
//     hello(); // Call hello function
//     return 0; // Return success
// }
//  ----------------------------------------------------------------------------------------


//  ----------------------------------------------------------------------------------------
// Example 2: WAP to Print Hello World using Recursion
// #include <stdio.h>
// // Function to print "Hello World"
// void printHello(int n) {
//     if (n > 0) { // Base case
//         printf("Hello World\n"); // Print message
//         printHello(n - 1); // Recursive call with decremented value
//     }
// }
// // Main function
// int main() {
//     int n = 5; // Number of times to print
//     printHello(n); // Call the recursive function
//     return 0; // Return success
// }
//  ----------------------------------------------------------------------------------------


//  ----------------------------------------------------------------------------------------
// Example 3: WAP to Print the sum of two numbers using Recursion
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
// Example : Factorial of a Number
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

// int main() {
//     int num = 1;
//     printf("Factorial of %d is %d\n", num, factorial(num));
//     return 0;
// }
// ----------------------------------------------------------------------------------------


// ----------------------------------------------------------------------------------------
// Example : Fibonacci Series
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


// -------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------
/*
 * Advantages of Recursion:
 * - Simplifies code for problems like tree traversal, factorial, Fibonacci, etc.
 * - Makes the code easier to read and maintain for certain problems.

 * Disadvantages of Recursion:
 * - Can lead to stack overflow if the base case is not defined or reached.
 * - May be less efficient than iterative solutions due to overhead of function calls.

 * Tips:
 * - Always define a clear base case.
 * - Use recursion only when it simplifies the problem.
 */
// -------------------------------------------------------------------------------------------------