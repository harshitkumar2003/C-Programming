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
'
'
//  -------------------------------------------------------------------------------------------------------
#include <stdio.h>
int main() {
    // Declaration and Initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing and Printing Elements
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}