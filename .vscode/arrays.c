// ---------------------------------------------------------------------------------------------------------
/*
 * Basic Theory of Arrays in C
 *
 * 1. Definition:
 *    - An array is a collection of elements of the same data type stored in contiguous memory locations.
 *    - Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

 * 2. Declaration:
 *    - Syntax: data_type array_name[size];
 *    - Example: int numbers[5];

 * 3. Initialization:
 *    - Arrays can be initialized at the time of declaration or later.
 *    - Example:
 *      int numbers[5] = {1, 2, 3, 4, 5}; // Initialization at declaration
 *      int numbers[5];
 *      numbers[0] = 1; // Initialization later

 * 4. Accessing Elements:
 *    - Array elements are accessed using their index.
 *    - Indexing starts from 0.
 *    - Example:
 *      int numbers[5] = {1, 2, 3, 4, 5};
 *      printf("%d", numbers[0]); // Outputs 1

 * 5. Types of Arrays:
 *    - One-dimensional array: A single row of elements.
 *      Example: int arr[5];
 *    - Multi-dimensional array: Arrays with more than one dimension (e.g., 2D arrays).
 *      Example: int matrix[3][3];

 * 6. Memory Layout:
 *    - Arrays are stored in contiguous memory locations.
 *    - The name of the array represents the address of the first element.

 * 7. Limitations:
 *    - Fixed size: The size of an array must be defined at compile time.
 *    - Homogeneous data: Arrays can only store elements of the same data type.

 * 8. Common Operations:
 *    - Traversing: Accessing each element of the array.
 *    - Searching: Finding an element in the array.
 *    - Sorting: Arranging elements in a specific order (ascending/descending).
 *    - Insertion/Deletion: Adding or removing elements (requires shifting).

 * 9. Example Code:
 */
//  -------------------------------------------------------------------------------------------------------


//  -------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main() {
//     // Declaration and Initialization
//     int numbers[5] = {10, 20, 30, 40, 50};

//     // Accessing and Printing Elements
//     for (int i = 0; i < 5; i++) {
//         printf("Element at index %d: %d\n", i, numbers[i]);
//     }

//     return 0;
// }
//  -------------------------------------------------------------------------------------------------------


//  -------------------------------------------------------------------------------------------------------
// Example: Enter prize of three item and print their total price with gst
// #include <stdio.h>
// int main() {
//     // Declaration and Initialization
//     float prices[3]; // Array to store prices of 3 items
//     float total = 0.0; // Variable to store total price
//     float gst_rate = 0.18; // GST rate (18%)

//     // Input prices from user
//     for (int i = 0; i < 3; i++) {
//         printf("Enter price of item %d: ", i + 1);
//         scanf("%f", &prices[i]);
//         total += prices[i]; // Add price to total
//     }

//     // Calculate total price with GST
//     float total_with_gst = total + (total * gst_rate);

//     // Print total price with GST
//     printf("Total price with GST: %.2f\n", total_with_gst);

//     return 0;
// }
//  -------------------------------------------------------------------------------------------------------


//  -------------------------------------------------------------------------------------------------------
// Pointer arithmetic in C allows you to perform arithmetic operations on pointers, which can be useful when working with arrays. Here are some key points about pointer arithmetic:

// 1. Pointer Arithmetic Basics:
//    - You can increment or decrement a pointer to move to the next or previous element in an array.
//    - For example, if `ptr` is a pointer to an integer, `ptr + 1` points to the next integer in memory (i.e., `ptr + sizeof(int)` bytes ahead).
//    - Similarly, `ptr - 1` points to the previous integer in memory.

// 2. Pointer Arithmetic with Arrays:
//    - When you have an array, the name of the array acts as a pointer to the first element of the array.
//    - For example, if you have `int arr[5];`, then `arr` is equivalent to `&arr[0]` (the address of the first element).
//    - You can use pointer arithmetic to access elements of the array using pointers.
//    - For example, if `ptr` is a pointer to the first element of the array, you can access the second element using `*(ptr + 1)` or `ptr[1]`.

// 3. Example of Pointer Arithmetic with Arrays:
// #include <stdio.h>
// int main() {
//     int arr[5] = {10, 20, 30, 40, 50}; // Array declaration and initialization
//     int *ptr = arr; // Pointer to the first element of the array

//     // Accessing elements using pointer arithmetic
//     for (int i = 0; i < 5; i++) {
//         printf("Element at index %d: %d\n", i, *(ptr + i)); // Accessing using pointer arithmetic
//     }

//     return 0;
// }
//  -------------------------------------------------------------------------------------------------------


//  -------------------------------------------------------------------------------------------------------
// Arrays in Pointers.c
// 1. Definition: An array is a collection of elements of the same data type stored in contiguous memory locations.
// 2. Declaration: Arrays are declared using the syntax: data_type array_name[size]; where size is the number of elements in the array.
// 3. Initialization: Arrays can be initialized at the time of declaration or later. Example: int arr[5] = {1, 2, 3, 4, 5};
// 4. Accessing Elements: Array elements are accessed using their index, starting from 0. Example: arr[0] = 1;
// 5. Types of Arrays: One-dimensional arrays (single row) and multi-dimensional arrays (e.g., 2D arrays). Example: int matrix[3][3];
// 6. Memory Layout: Arrays are stored in contiguous memory locations, and the name of the array represents the address of the first element.
// 7. Limitations: Fixed size (size must be defined at compile time) and homogeneous data (only one data type).
// 8. Common Operations: Traversing, searching, sorting, insertion, and deletion of elements.
//  -------------------------------------------------------------------------------------------------------


//  -------------------------------------------------------------------------------------------------------
// Traverse an array using pointers
//   #include <stdio.h>
//   int main() {
//       int arr[5] = {1, 2, 3, 4, 5}; // Declare an array of integers
//       int *ptr = arr; // Initialize the pointer with the address of the first element of the array

//       printf("Array elements using pointer:\n");
//       for (int i = 4; i >= 0; i--) {
//                   printf("%d ", *(ptr + i)); // Access array elements using pointer

//       }
//       printf("\n");
//       return 0;
//  }
//  -------------------------------------------------------------------------------------------------------

//  -------------------------------------------------------------------------------------------------------
// Example: WAP to print odd and even numbers in an array
// #include <stdio.h>
// int main () {
//     int arr[5] = {1, 2, 3, 4, 5}; // Declare an array of integers
//     printf("Even numbers in the array:\n");
//     for (int i = 0; i < 5; i++) {
//         if (arr[i] % 2 == 0) { // Check if the number is even
//             printf("%d ", arr[i]); // Print even number
//         }
//     }
//     printf("\nOdd numbers in the array:\n");
//     for (int i = 0; i < 5; i++) {
//         if (arr[i] % 2 != 0) { // Check if the number is odd
//             printf("%d ", arr[i]); // Print odd number
//         }
//     }
//     printf("\n");
//     return 0;
// }
//  -------------------------------------------------------------------------------------------------------


//  -------------------------------------------------------------------------------------------------------
// Example: WAP to print index of array of a number given by the user
//  #include <stdio.h>
//  int main() {
//         int arr[5] = {10, 20, 30, 40, 50}; // Declare an array of integers
//          int num, found = 0; // Initialize a variable to check if the number is found
    
//          printf("Enter a number to search: ");  
//                scanf("%d", &num); // Input the number to search
//          // Search for the number in the array
//          for (int i = 0; i < 5; i++) {
//              if (arr[i] == num) {
//                  printf("Number %d found at index %d\n", num, i); // Print the index if found
//                  found = 1; // Set found to true                
//               break; // Exit the loop
//              }
//              else 
//                 printf("Number %d not found at index %d\n", num, i); // Print if not found
//             }
//          return 0;
//      }
//  -------------------------------------------------------------------------------------------------------


//   -------------------------------------------------------------------------------------------------------
// Example: WAP to print the table of  and 3 and square of i using 2D array

// 1. Definition: A 2D array is an array of arrays, where each element is itself an array. It can be visualized as a table with rows and columns.

// 2. Declaration: A 2D array is declared using the syntax: data_type array_name[rows][columns]; where rows and columns are the dimensions of the array

//  #include <stdio.h>
//  int main() {
//      int arr[2][10];
//     for(int i = 1, j = 1; i <= 10 && j <= 10; i++, j++) { 
//         int two = 4 * i;
//          int three = 8 * j;
//          int sqr = i * j;
//          printf("4 X %d = %d \t 8 X %d = %d \t %d X %d = %d\n",i,two,j,three,i,j,sqr);
//      }
//      return 0; 
//  }
//  -------------------------------------------------------------------------------------------------------
// Example: WAP to print the table of 2 and 3 using 2D array 
// #include <stdio.h>
// void table(int arr[][10], int rows, int cols, int num);
// int main() {
//     int arr[2][10]; // Declare a 2D array with 2 rows and 10 columns
//     int num1 = 2, num2 = 3; // Numbers for which to print the table

    // Call the function to print the tables
//     table(arr, 2, 10, num1);
//     table(arr, 2, 10, num2);

//     return 0;
// }
// void table(int arr[][10], int rows, int cols, int num) {
//     printf("Table of %d:\n", num);
//     for (int i = 1; i <= 10; i++) {
//         arr[0][i] = num * i; // Calculate the table value
//         printf("%d x %d = %d\n", num, i, arr[0][i]); // Print the table value
//     }
//     printf("\n");
// }
// --------------------------------------------------------------------------------------------------- 

// ====================
// home work
// ====================
// ---------------------------------------------------------------------------------------------------
// Example: WAP to find how many times a number is repeated in an array
// #include<stdio.h>
// int main() {
//     int arr[5] = {1, 5, 3, 4, 5}; // Declare an array of integers
//     int num, count = 0; // Initialize a variable to count occurrences

//     printf("Enter a number to count its occurrences: ");  
//     scanf("%d", &num); // Input the number to search

//     // Count occurrences of the number in the array
//     for (int i = 0; i < 5; i++) {
//         if (arr[i] == num) {
//             count++; // Increment count if the number is found
//         }
//     }

//     printf("Number %d occurs %d times in the array.\n", num, count); // Print the count
//     return 0;
// }
// ---------------------------------------------------------------------------------------------------


// ---------------------------------------------------------------------------------------------------
// Example: WAP to find the largest and smallest number in an array
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 5, 40, 15}; // Declare an array of integers
    int largest = arr[0]; // Initialize largest with the first element
    int smallest = arr[0]; // Initialize smallest with the first element

    // Find the largest and smallest numbers in the array
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest if a larger number is found
        }
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if a smaller number is found
        }
    }

    printf("Largest number in the array: %d\n", largest); // Print the largest number
    printf("Smallest number in the array: %d\n", smallest); // Print the smallest number

    return 0;
}


















// ---------------------------------------------------------------------------------------------------

    


