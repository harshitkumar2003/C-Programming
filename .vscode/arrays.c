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
//  #include <stdio.h>
//  int main() {
//      int arr[5] = {1, 2, 3, 4, 5}; // Declare an array of integers
//      int *ptr = arr; // Initialize the pointer with the address of the first element of the array

//      printf("Array elements using pointer:\n");
//      for (int i = 0; i < 5; i++) {
//          printf("%d ", *(ptr + i)); // Access array elements using pointer

//      }
//      printf("\n");
//      return 0;
// }
//  -------------------------------------------------------------------------------------------------------


//  -------------------------------------------------------------------------------------------------------
// Example: WAP to print array of a number given by the user  
// #include <stdio.h>
// int mian () {
// int arr [5] = {1,2,3,4,5};
// int num;
// printf("Enter the number: ");
// scanf("%d",&num);
// for(int i = 0; i < 5; i++) {
//     if (arr[i] == num ) {
//          printf("\n The number %d is present in index of %d",num, arr[i]);
//     }
//   else  
// printf("The number is not present in an array");
// }
// printf("\n");
// return 0;
// }
//  -------------------------------------------------------------------------------------------------------


//  -------------------------------------------------------------------------------------------------------
// Example: WAP to print the table of 2 and 3 using 2D array 
#include <stdio.h>
int main() {
    int arr[2][10];
    for(int i = 1, j = 1; i <= 10 && j <= 10; i++, j++) { 
        int two = 2 * i;
        int three = 3 * j;
        printf("2 X %d = %d \t 3 X %d = %d\n",i,two,j,three);
    }
    return 0; 
}
//  -------------------------------------------------------------------------------------------------------

