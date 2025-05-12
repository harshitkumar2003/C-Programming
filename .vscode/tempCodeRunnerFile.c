#include <stdio.h>
int main() {
    char firstName[20]; // Declare a character array for the first name
    char lastName[20];  // Declare a character array for the last name

    // Prompt the user to enter the first name
    printf("Enter your first name: ");
    scanf("%s", firstName); // Read the first name from standard input

    // Prompt the user to enter the last name
    printf("Enter your last name: ");
    scanf("%s", lastName); // Read the last name from standard input

    // Print the full name
    printf("Full Name: %s %s\n", firstName, lastName); // Print the full name using %s format specifier

    // Print each character of the full name using a loop
    printf("Characters in Full Name:\n");
    for (int i = 0; i < strlen(firstName); i++) {
        printf("%c ", firstName[i]); // Print each character of the first name
    }
    for (int i = 0; i < strlen(lastName); i++) {
        printf("%c ", lastName[i]); // Print each character of the last name
    }

    return 0; // Return 0 to indicate successful execution
}