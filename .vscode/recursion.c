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
// Example 1: Factorial of a Number
// Factorial of a number using recursion
#include <stdio.h>
// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) { // Base case
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
// ----------------------------------------------------------------------------------------


// ----------------------------------------------------------------------------------------
// Example 2: Fibonacci Series
#include <stdio.h>
// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) { // Base case
        return 0;
    } else if (n == 1) { // Base case
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
    }
}

int main() {
    int terms = 10;
    printf("Fibonacci series up to %d terms:\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
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