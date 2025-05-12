// =============================================
// strings
// =============================================
// A character array is a data structure in C that stores a sequence of characters. It is commonly used to represent strings. In C, strings are null-terminated, meaning that the last character in the array is followed by a special null character ('\0') to indicate the end of the string.

// For example, the string "Hello" can be represented as a character array as follows:
// char str[6] = "Hello"; // 5 characters + 1 null terminator

// The size of the array must be large enough to accommodate all characters in the string, including the null terminator.

// If the size is not specified, the compiler will automatically allocate enough space for the string and the null terminator.
// For example:
// char str[] = "Hello"; // Compiler allocates 6 bytes (5 characters + 1 null terminator)

// keywords: C, strings, character array, null-terminated, string representation, memory allocation, string manipulation, string functions, string length, string comparison, string concatenation, string copy, string input/output.

// #include <stdio.h>
// #include <string.h> // Include string.h for string functions
// int main() {
//      char str[100]; // Declare a character array to store the string
//         printf("Enter a string: "); // Prompt the user for input
//         fgets(str, sizeof(str), stdin); // Read a string from standard input
//         printf("You entered: %s", str); // Print the entered string
//         return 0; // Return 0 to indicate successful execution
// }
// ----------------------------------------------------------------------------------------------------


// ----------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main() {
//     char name[] = "John Doe"; // Declare and initialize a string 
//         char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Declare and initialize a string using character array
//         printf("Name: %s\n", name); // Print the string using %s format specifier
//         printf("Greeting: %s\n", greeting); // Print the string using %s format specifier
//         return 0;
// }
// ----------------------------------------------------------------------------------------------------


// ----------------------------------------------------------------------------------------------------
// In the above code, we declare and initialize a string using both methods. The first method uses double quotes to create a string literal, while the second method uses a character array with individual characters. Both methods are valid in C.
// The %s format specifier is used to print strings in C. It automatically handles the null terminator, so you don't need to worry about it when printing strings.
// The output of the above code will be:
// Name: John Doe
// Greeting: Hello
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// Example: WAP to create a string first name and last name to store details and print all characters using a loop
// #include <stdio.h>
// int main() {
//     char firstName[20]; // Declare a character array for the first name
//     char lastName[20];  // Declare a character array for the last name

//     // Prompt the user to enter the first name
//     printf("Enter your first name: ");
//     scanf("%s", firstName); // Read the first name from standard input

//     // Prompt the user to enter the last name
//     printf("Enter your last name: ");
//     scanf("%s", lastName); // Read the last name from standard input

//     // Print the full name
//     printf("Full Name: %s %s\n", firstName, lastName); // Print the full name using %s format specifier

//     // Print each character of the full name using a loop
//     printf("Characters in Full Name:\n");
//     for (int i = 0; i < strlen(firstName); i++) {
//         printf("%c ", firstName[i]); // Print each character of the first name
//     }
//     for (int i = 0; i < strlen(lastName); i++) {
//         printf("%c ", lastName[i]); // Print each character of the last name
//     }

//     return 0; // Return 0 to indicate successful execution
// }
// In this program, we declare two character arrays to store the first name and last name. We use scanf to read the names from standard input. The %s format specifier is used to read strings, and it automatically handles the null terminator.
// We then print the full name using printf with the %s format specifier. Finally, we use a loop to print each character of the first name and last name separately.
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
Example: WAP to 
// -----------------------------------------------------------------------------------------------------
