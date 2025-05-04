#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Array declaration and initialization
    int *ptr = arr; // Pointer to the first element of the array

    // Accessing elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, *(ptr + i)); // Accessing using pointer arithmetic
    }

    return 0;
}