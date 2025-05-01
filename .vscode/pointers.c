// ======================
// Pointers
// ======================


// -------------------------------------------------------------------------------------------------------------
// Pointers are variables that store the address of another variable. They are used to manipulate data in memory directly and can be used to create dynamic data structures like linked lists, trees, etc.
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// * 1. Pointers are variables that store memory addresses of other variables.
// * 2. They are declared using the asterisk (*) symbol before the variable name.
// * 3. Pointers can be dereferenced using the asterisk (*) operator to access the value at the address they point to.
// * 4. The address of a variable can be obtained using the ampersand (&) operator.
// * 5. Pointers can be used to create dynamic data structures like linked lists, trees, etc.
// * 6. Pointers can be passed to functions to modify the original variable's value.
// * 7. Pointers can be used to allocate and deallocate memory dynamically using malloc() and free() functions.
// * 8. Pointers can be used to create arrays of pointers, pointer to pointers, and function pointers.
// * 9. Pointers can be used to create multi-dimensional arrays and strings.
// * 10. Pointers can be used to create and manipulate complex data types like structures and unions.
// * 11. Pointers can be used to create and manipulate arrays of structures and structures of pointers.
// * 12. Pointers can be used to create and manipulate arrays of arrays and arrays of pointers to functions.
// * 13. Pointers can be used to create and manipulate arrays of pointers to structures and structures of pointers to arrays.
// * 14. Pointers can be used to create and manipulate arrays of pointers to functions and functions of pointers to arrays.
// * 15. Pointers can be used to create and manipulate arrays of pointers to pointers and pointers to pointers to arrays.
// * 16. Pointers can be used to create and manipulate arrays of pointers to pointers to functions and functions of pointers to pointers to arrays.
// -------------------------------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------------------
// syntax:
// Example: Basic Pointer Declaration and Initialization
// int main() {
//     int a = 10; // Declare an integer variable
//     int *p; // Declare a pointer to an integer
//     p = &a; // Initialize the pointer with the address of the variable 'a'
//     printf("Value of a: %d\n", a); // Output: 10
//     printf("Address of a: %p\n", (void*)&a); // Output: Address of 'a'
//     printf("Value of p: %p\n", (void*)p); // Output: Address of 'a'
//     printf("Value pointed by p: %d\n", *p); // Output: 10

//     return 0;
// }
// -------------------------------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------------------
// Example: Pointer Arithmetic
//  #include <stdio.h>
//  int main() {
//      int arr[] = {1, 2, 3, 4, 5}; // Declare an array of integers
//      int *p = arr; // Initialize the pointer with the address of the first element of the array

//      printf("Array elements using pointer arithmetic:\n");
//      for (int i = 0; i < 5; i++) {
//          printf("%d ", *(p + i)); // Access array elements using pointer arithmetic
//      }
//      printf("\n");

// return 0;
//  }
// -------------------------------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------------------
// Example: Pointer to Pointer
//   #include <stdio.h>
//   int main() {
//     int a = 10; // Declare an integer variable
//      int *p; // Declare a pointer to an integer
//      int **q; // Declare a pointer to a pointer to an integer
//      p = &a; // Initialize the pointer with the address of the variable 'a'
//      q = &p; // Initialize the pointer to pointer with the address of the pointer 'p'
//       printf("Value of a: %d\n", a); // Output: 10
//         printf("Address of a: %p\n", (void*)&a); // Output: Address of 'a'
//         printf("Value of p: %p\n", (void*)p); // Output: Address of 'a'
//         printf("Value pointed by p: %d\n", *p); // Output: 10
//         printf("Value of q: %p\n", (void*)q); // Output: Address of 'p'
//         printf("Value pointed by q: %p\n", (void*)*q); // Output: Address of 'a'
//         printf("Value pointed by q: %d\n", **q); // Output: 10
//         printf("Address of p: %p\n", (void*)&p); // Output: Address of 'p'
//         printf("Address of q: %p\n", (void*)&q); // Output: Address of 'q'
//   return 0;
//     }
// -------------------------------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------------------------------
// Example: Pointer to Function
//    #include <stdio.h>
//     void square(int n ); // Function to print square of a number
//     void square(int n) {
//          printf("Square is: %d\n", n*n);
//     }
//     // main  function to demonstrate pointer to function
//     int main() {
//         func_ptr = square (num); // Initialize the function pointer with the address of the function 'square'
//         func_ptr(5); // Call the function using the function pointer
//         return 0;
//     }
// Example: Pointer to Function for changing value of a variable in main function
//    #include <stdio.h>
//     void square(int *n ); // Function to print square of a number
//     void square(int *n) {
//          printf("Square is: %d\n", (*n)*(*n));
//     }
//     // main  function to demonstrate pointer to function
//     int main() {
//         func_ptr = square (num); // Initialize the function pointer with the address of the function 'square'
//         func_ptr(5); // Call the function using the function pointer
//         return 0;
//     }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: Pointer to Array
// #include <stdio.h>
// int main() {
//     int arr[] = {1, 2, 3, 4, 5}; // Declare an array of integers
//     int *p = arr; // Initialize the pointer with the address of the first element of the array

//     printf("Array elements using pointer:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", *(p + i)); // Access array elements using pointer
//     }
//     printf("\n");

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: Pointer to Structure
// #include <stdio.h>
// struct Point { // Define a structure
//     int x = 0;
//     int y = 5;
// };
// int main() {
//     struct Point p1; // Declare a structure variable
//     struct Point *p2; // Declare a pointer to the structure
//     p2 = &p1; // Initialize the pointer with the address of the structure variable

//     printf("Point coordinates: (%d, %d)\n", p2->x, p2->y); // Access structure members using pointer

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Used format specifier: %p to print pointer addresses
// increment(int *p) { // Function to increment the value pointed by the pointer
//     (*p)++; // Increment the value at the address pointed by the pointer
// }

// decrement(int *p) { // Function to decrement the value pointed by the pointer
//     (*p)--; // Decrement the value at the address pointed by the pointer
// }

// int main() {
    //  int a = 10; // Declare an integer variable
    //  *ptr = &a; // Initialize the pointer with the address of the variable 'a'
    //     printf("Value of a before increment: %d\n", a); // Output: 10
    //     ++ptr; // Increment the value at the address pointed by the pointer
    //     printf("Value of a after increment: %d\n", a); // Output: 11
    //     --ptr; // Decrement the value at the address pointed by the pointer
    //     printf("Value of a after decrement: %d\n", a); // Output: 10
    //     return 0;
    // }
// ------------------------------------------------------------------------------------------------------------
// Example: swapping two numbers using pointers
// #include <stdio.h>
// void swap(int *a, int *b) { // Function to swap two numbers using pointers
//     int temp; // Temporary variable to hold the value during swapping
//     temp = *a; // Store the value pointed by 'a' in 'temp'
//     *a = *b; // Assign the value pointed by 'b' to the address pointed by 'a'
//     *b = temp; // Assign the value stored in 'temp' to the address pointed by 'b'
// }
// int main() {
//     int x = 5, y = 10; // Declare two integer variables
//     printf("Before swapping: x = %d, y = %d\n", x, y); // Output: Before swapping: x = 5, y = 10
//     swap(&x, &y); // Call the swap function with the addresses of 'x' and 'y'
//     printf("After swapping: x = %d, y = %d\n", x, y); // Output: After swapping: x = 10, y = 5
//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------
// Example: calculate the sum, average and product of two numbers using pointers
#include <stdio.h>
void calculate(int a, int b, int *sum, float *avg, int *prod); // functiom prototype
void calculate(int a, int b, int *sum, float *avg, int *prod) { // Function to calculate sum, average and product using pointers
    *sum = a + b; // Calculate sum and store it at the address pointed by 'sum'
    *avg = (a + b) / 2; // Calculate average and store it at the address pointed by 'avg'
    *prod = (a) * (b); // Calculate product and store it at the address pointed by 'prod'
}
int main() {
    int x = 5, y = 10; // Declare two integer variables
    int sum; // Variable to store sum
    float avg; // Variable to store average
    int prod; // Variable to store product

    calculate(x, y, &sum, &avg, &prod); // Call the calculate function with the addresses of 'sum', 'avg' and 'prod'

    printf("Sum: %d\n", sum); // Output: Sum: 15
    printf("Average: %.2f\n", avg); // Output: Average: 7.50
    printf("Product: %d\n", prod); // Output: Product: 50

    return 0;
}






// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------







