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
// malloc: takes no of bytes to be allocated and returns a pointer to the allocated memory block.
// syntax:
// ptr = (void*)malloc(5*sizeof(int));
// where ptr is a pointer to the allocated memory block and 5*sizeof(int) is the size of the memory block to be allocated.
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Example usage of malloc
    int *ptr = (int*)malloc(5 * sizeof(int)); // Allocating memory for an array of 5 integers
    ptr[0] = 1; // Assigning values to the allocated memory
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); // Printing the values stored in the allocated memory
    }
    return 0;
}

