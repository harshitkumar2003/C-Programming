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
