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











