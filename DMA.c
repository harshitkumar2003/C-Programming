// ==========================================================
// Dynamic Memory Allocator (DMA) 
// ==========================================================
// It is way to allocate and deallocate memory dynamically at runtime.
// This code implements a simple dynamic memory allocator using a linked list to manage free and allocated blocks of memory.
// The allocator supports basic operations such as allocating, freeing, and reallocating memory blocks.
// ---------------------------------------------------------------------------------------------------------
// functions for dynamic memory allocation
// a> malloc: Allocates a block of memory of a specified size and returns a pointer to the allocated memory.
// b> calloc: Allocates a block of memory for an array of elements, initializes all bytes to zero, and returns a pointer to the allocated memory.
// c> realloc: Resizes a previously allocated block of memory to a new size and returns a pointer to the reallocated memory.
// d> free: Deallocates a previously allocated block of memory, making it available for future allocations.

// ---------------------------------------------------------------------------------------------------------


// ---------------------------------------------------------------------------------------------------------
// malloc: takes no of bytes to be allocated and returns a pointer to the allocated memory block.
// syntax:
// ptr = (void*)malloc(5*sizeof(int));
// where ptr is a pointer to the allocated memory block and 5*sizeof(int) is the size of the memory block to be allocated.
// ---------------------------------------------------------------------------------------------------------
// Example: print to allocate memory using malloc to store 5 integers
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     // Example usage of malloc
//     int *ptr;
//     ptr = (int*)malloc(5 * sizeof(int)); // Allocating memory for an array of 5 integers
//     ptr[0] = 1; // Assigning values to the allocated memory
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     ptr[4] = 5;
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", ptr[i]); // Printing the values stored in the allocated memory
//     }
//     return 0;
// }
// ----------------------------------------------------------------------------------------------


// ----------------------------------------------------------------------------------------------
// Example: print to allocate memory using malloc to store 5 prieces
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     // Example usage of malloc
//     float *ptr;
//     ptr = (float*)malloc(5 * sizeof(float)); // Allocating memory for an array of 5 integers
//     ptr[0] = 34.3; // Assigning values to the allocated memory
//     ptr[1] = 44.4;
//     ptr[2] = 2.33;
//     ptr[3] = 43.3;
//     ptr[4] = 53.1;
//     for (int i = 0; i < 5; i++) {
//         printf("%f\t", ptr[i]); // Printing the values stored in the allocated memory
//     }
//     return 0;
// }
// ----------------------------------------------------------------------------------------------


// ----------------------------------------------------------------------------------------------
// calloc: takes no of elements and size of each element to be allocated and returns a pointer to the allocated memory block.
// calloc by default initializes all bytes to zero.
// syntax:
// ptr = (void*)calloc(5, sizeof(int));
// ----------------------------------------------------------------------------------------------
// Example: WAP to allocate memory of size n where n is given by user using calloc
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
    
//     // Allocating memory for an array of n integers using calloc
//     int *ptr;
//     ptr = (int*)calloc(n, sizeof(int));
//     if (ptr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1; // Exit if memory allocation fails
//     }
//        // Assigning values to the allocated memory
//     for (int i = 0; i < n; i++) {
//         ptr[i] = i + 1; // Assigning values from 1 to n
//     }
//     // Printing the values stored in the allocated memory
//     printf("Allocated memory values:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", ptr[i]);
//     }
//     return 0; // Exit the program
// }
// ----------------------------------------------------------------------------------------------


// ----------------------------------------------------------------------------------------------
// free: takes a pointer to previously allocated memory and deallocates it, making it available for future allocations.
// syntax:
// free(ptr);
// where ptr is a pointer to the previously allocated memory block.
// -----------------------------------------------------------------------------------------------
// Example: WAP to allocate memory using malloc and free it
 #include <stdio.h>
 #include <stdlib.h>
 int main() {
     // Example usage of malloc
     int *ptr;
     ptr = (int*)malloc(5 * sizeof(int)); // Allocating memory for an array of 5 integers
     if (ptr == NULL) {
         printf("Memory allocation failed\n");
         return 1; // Exit if memory allocation fails
     }
     // Assigning values to the allocated memory
     for (int i = 0; i < 5; i++) {
         ptr[i] = i + 1;
     }
     // Printing the values stored in the allocated memory
     printf("Allocated memory values:\n");
     for (int i = 0; i < 5; i++) {
         printf("%d ", ptr[i]);
     }
     printf("\n");
     
     // Freeing the allocated memory
     free(ptr);
     printf("Memory freed successfully.\n");
     
     return 0; // Exit the program
 }
// ----------------------------------------------------------------------------------------------


// ----------------------------------------------------------------------------------------------
// realloc: takes a pointer to previously allocated memory and the new size to be allocated and returns a pointer to the reallocated memory block