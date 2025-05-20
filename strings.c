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
// In read input string is also a pointer don't need to (&) while input.
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
// Example: WAP to ask user to enter their first name and print it back to them also try with their full name.
//  #include <stdio.h>
//  int main(){
//     char name[20];
//     printf("enter your name: ");
//     //scanf ("%s",&name); it's a choice to use & or not in a string both will be support
//     scanf ("%s",name);
//     //NOTE: scanf() cannot read multiword string with spaces here gets(for read) and puts(for print) come 
//     printf("Your name is: %s",name);
//     return 0;
//  }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// =========================
// String functions
// =========================
// 1> gets(str) -> read string from standard input
// It is dangerous and outdated function because it can not  identify the size of string.
// It can cause buffer overflow if the input string is longer than the allocated memory.
// We can input even multiword string

// 2> puts(str) -> print string to standard output
// It is also outdated function.
// It automatically adds a newline character after printing the string.
// It is used to print a string to the standard output (stdout).
// It is a safer alternative to printf("%s", str) because it does not require format specifiers.

// Example: WAP to ask user to enter their first name and print it back to them also try with their full name.
// #include <stdio.h>
// int main(){
//     char name[100]; // Declare a character array to store the string
//     printf("Enter your name: "); // Prompt the user for input
//     gets(name); // Read a string from standard input (including spaces)
//     printf("Your name is: "); // Print the string using %s format specifier
//     puts(name); // Print the entered string (including spaces)
//     return 0; // Return 0 to indicate successful execution
// }

// 3> fgets(str,n,file)
// It is a safer alternative to gets() because it allows you to specify the maximum number of characters to read.
// It reads a string from the specified file (or stdin) and stores it in the character array str.
// It stops reading when either a newline character is encountered or the specified number of characters (n-1) has been read.
// It automatically adds a null terminator at the end of the string.
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
/* ===============================
     String using pointer
================================ */
// char *str = "hello world"; // string literal
// char str[] = "hello world"; // string array
// It store string in memory and the assigned address is stored in the char pointer 'str'
// string can be changed and reinitialized in pointer
// char str = "hello world";
// string cannot be changed and reinitialized in array of character
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// Example: WAP that takes user input for their name and print thier length  
// #include <stdio.h>
// int length(char name[100]);  // creting function for counting length of input
// int length(char name[100]){ // function definiton
//     int count=0; // initialize a count variable as 0   
//     for(int i=0; name[i]!='\0';i++){ // looping for counting word of a string
//         count++;  // increase value by one when loop run
//     }
//     return count-1; // return n-1 length last length is '\0' they will also count that's why we use n-1
// }
// int main(){  // main function
//     char name[100];
//     fgets(name,100,stdin);
//     printf("length is:%d",length(name));
//     return 0;
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// standard library functon
// We have to write string.h header file while using string functions
// #include <string.h> Include string.h for string functions

// 1> strlen(str) -> returns the length of the string excluding the null terminator.
// It is a standard library function that calculates the length of a string.
// It takes a string as input and returns the number of characters in the string, not including the null terminator.

// Example: WAP to find the length of a string using strlen()
// #include <stdio.h>
// #include <string.h> // Include string.h for string functions
// int main() {
//     char str[100]; // Declare a character array to store the string
//     printf("Enter a string: "); // Prompt the user for input
//     fgets(str, sizeof(str), stdin); // Read a string from standard input

//     int length = strlen(str + 1); // Calculate the length of the string using strlen()
//     // The +1 is used to skip the first character of the string
//     printf("Length of the string: %d\n", length); // Print the length of the string
//     return 0; // Return 0 to indicate successful execution
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// 2> strcpy(dest, src) -> copies the string from src to dest.
// It is a standard library function that copies a string from one location to another.
// It takes two arguments: the destination string (dest) and the source string (src).
// The destination string must have enough space to hold the copied string, including the null terminator.

// Example: WAP to copy a string using strcpy()
// #include <stdio.h>
// #include <string.h> // Include string.h for string functions
// int main() {
//     char newstr[100]; // Declare a character array for the source string
//     char oldstr[100]; // Declare a character array for the destination string

//     printf("Enter a old string: "); // Prompt the user for input
//     fgets(oldstr, sizeof(oldstr), stdin); // Read a string from standard input

//     printf("Enter a new string: "); // Prompt the user for input
//     fgets(newstr, sizeof(newstr), stdin); // Read a string from standard input

//     strcpy(oldstr, newstr); // Copy the source string to the destination string

//     printf("Copied string: %s", newstr); // Print the copied string
//     return 0; // Return 0 to indicate successful execution
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// 3> strcat(dest, src) -> concatenates the string from src to dest.
// It is a standard library function that appends one string to another.
// It takes two arguments: the destination string (dest) and the source string (src).
// The destination string must have enough space to hold the concatenated string, including the null terminator.

// Example: WAP to concatenate two strings using strcat()
//  #include <stdio.h>
//  #include <string.h> // Include string.h for string functions
//  int main() {
//     char str1[100]; // Declare a character array for the first string
//     char str2[50]; // Declare a character array for the second string
//     printf("Enter first string: "); // Prompt the user for input
//     fgets(str1, sizeof(str1), stdin); // Read the first string from standard input
//     printf("Enter second string: "); // Prompt the user for input
//     fgets(str2, sizeof(str2), stdin); // Read the second string from standard input
//     strcat(str1, str2); // Concatenate the second string to the first string
//     printf("Concatenated string: %s", str1); // Print the concatenated string
//     return 0; // Return 0 to indicate successful execution
//     }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// 4> strcmp(str1, str2) -> compares two strings lexicographically.
// It is a standard library function that compares two strings.
// It takes two strings as arguments and returns an integer value:
// - A negative value if str1 is less than str2
// - A positive value if str1 is greater than str2
// - Zero if str1 is equal to str2

// Example: WAP to compare two strings using strcmp()
// #include <stdio.h>
// #include <string.h> // Include string.h for string functions
// int main() {
//     char str1[100]; // Declare a character array for the first string
//     char str2[100]; // Declare a character array for the second string
//     printf("Enter first string: "); // Prompt the user for input
//     fgets(str1, sizeof(str1), stdin); // Read the first string from standard input
//     printf("Enter second string: "); // Prompt the user for input
//     fgets(str2, sizeof(str2), stdin); // Read the second string from standard input

//     int result = strcmp(str1, str2); // Compare the two strings

//     if (result == 0) {
//         printf("Strings are equal.\n"); // Print if strings are equal
//     } else if (result < 0) {
//         printf("String 1 is less than String 2.\n"); // Print if str1 is less than str2
//     } else {
//         printf("String 1 is greater than String 2.\n"); // Print if str1 is greater than str2
//     }
//     return 0; // Return 0 to indicate successful execution
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// Example: WAP to take a string input from the user using %c and print it back to them
// #include <stdio.h>
// int main() {
//     char str[100]; // Declare a character array to store the string
//     int i = 0; // Initialize an index variable to 0
//     char ch; // Declare a character variable to store individual characters
//     printf("Enter a character: "); // Prompt the user for input
//     while(ch != '\n') { // Loop until a newline character is encountered
//     scanf("%c", &ch); // Read a character from standard input
//     str[i] = ch; // Store the character in the string array
//     i++; // Increment the index
//     }
//     str[i] = '\0'; // Add a null terminator to the end of the string
//     printf("You entered: %s", str); // Print the entered string
//     return 0; // Return 0 to indicate successful execution
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// Example: WAP to create the salted form of a string entered by the user
// #include <stdio.h>
// #include <string.h> // Include string.h for string functions
// void generateSaltedString(char newpassword[]);
// void generateSaltedString(char newpassword[]) {
//     char salt[] = "1234"; // Define a salt string
//     char saltedStr[200]; // Declare a character array to store the salted string
//     strcpy(saltedStr, newpassword); // Copy the original string to the salted string
//     strcat(saltedStr, salt); // Concatenate the salt to the salted string
//     printf("Salted String: %s\n", saltedStr); // Print the salted string
// }
// int main() {
//     char str[100]; // Declare a character array to store the string
//     printf("Enter a string: "); // Prompt the user for input
//     scanf("%s", str); // Read a string from standard input   
//     generateSaltedString(str); // Call the function to generate the salted string
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// Example: WAP to create a function that takes a string as input and returns the sliced string
// #include <stdio.h>
// int sliceString(char str[], int start, int end); // Function prototype
// int sliceString(char str[], int start, int end) { // Function definition
//     char slicedStr[100]; // Declare a character array to store the sliced string
//     int j = 0; // Initialize an index variable for the sliced string
//     for (int i = start; i < end; i++) { // Loop from start to end index
//         slicedStr[j] = str[i]; // Copy characters from the original string to the sliced string
//         j++; // Increment the index for the sliced string
//     }
//     slicedStr[j] = '\0'; // Add a null terminator to the end of the sliced string
//     printf("Sliced String: %s\n", slicedStr); // Print the sliced string
//     return 0; // Return 0 to indicate successful execution
// }

// int main() {
//     char str[100]; // Declare a character array to store the string
//     int start, end; // Declare variables for start and end indices
//     printf("Enter a string: "); // Prompt the user for input
//     scanf("%s", str); // Read a string from standard input
//     printf("Enter start index: "); // Prompt the user for start index
//     scanf("%d", &start); // Read the start index from standard input
//     printf("Enter end index: "); // Prompt the user for end index
//     scanf("%d", &end); // Read the end index from standard input
//     sliceString(str, start, end); // Call the function to slice the string
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// Example: WAP to create a function that count the number of vowels in a string
// #include <stdio.h>
// int countVowels(char str[]); // Function prototype
// int countVowels(char str[]) { // Function definition
//     int count = 0; // Initialize a count variable to 0
//     for (int i = 0; str[i] != '\0'; i++) { // Loop through the string until the null terminator
//         char ch = str[i]; // Get the current character
//         // Check if the character is a vowel (both uppercase and lowercase)
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             count++; // Increment the count if a vowel is found
//         }
//     }
//         // Check if the string is empty
//         if (count == 0) {
//             printf("No vowels found in the string.\n"); // Print if no vowels are found
//         } else {
//             printf("Number of vowels: %d\n", count); // Print the number of vowels
//         }
//     return count; // Return the count of vowels
// }
// int main() {
//     char str[100]; // Declare a character array to store the string
//     printf("Enter a string: "); // Prompt the user for input
//     scanf("%s",str);// Read a string from standard input
//     countVowels(str); // Call the function to count vowels in the string
//     return 0; // Return 0 to indicate successful execution
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// Example: WAP to create a function that check if a given character is present in a string
// #include <stdio.h>
// int isCharPresent(char str[], char ch); // Function prototype
// int isCharPresent(char str[], char ch) { // Function definition
//     for (int i = 0; str[i] != '\0'; i++) { // Loop through the string until the null terminator
//         if (str[i] == ch) { // Check if the character matches
//             return 1; // Return 1 if the character is found
//         }
//     }
//     return 0; // Return 0 if the character is not found
// }
// int main() {
//     char str[100]; // Declare a character array to store the string
//     char ch; // Declare a character variable to store the character to search for
//     printf("Enter a string: "); // Prompt the user for input
//     scanf("%s", str); // Read a string from standard input
//     printf("Enter a character to search: "); // Prompt the user for the character to search for
//     scanf(" %c", &ch); // Read the character from standard input (note the space before %c)
//     if (isCharPresent(str, ch)) { // Call the function to check if the character is present
//         printf("Character '%c' is present in the string.\n", ch); // Print if the character is found
//     } else {
//         printf("Character '%c' is not present in the string.\n", ch); // Print if the character is not found
//     }
//     return 0; // Return 0 to indicate successful execution
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// Example: WAP to convert lowercase to uppercase vowel in a string
// #include <stdio.h>
// int convertVowelsToUppercase(char str[]); // Function prototype
// int convertVowelsToUppercase(char str[]) { // Function definition
//     for (int i = 0; str[i] != '\0'; i++) { // Loop through the string until the null terminator
//         char ch = str[i]; // Get the current character
//         // Check if the character is a lowercase vowel
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             str[i] = ch - 32; // Convert to uppercase by subtracting 32 from the ASCII value
//         }
//     }
//     return 0; // Return 0 to indicate successful execution
// }
// int main() {
//     char str[100]; // Declare a character array to store the string
//     printf("Enter a string: "); // Prompt the user for input
//     scanf("%s", str); // Read a string from standard input
//     convertVowelsToUppercase(str); // Call the function to convert vowels to uppercase
//     printf("Converted string: %s\n", str); // Print the converted string
//     return 0; // Return 0 to indicate successful execution
// }
// -----------------------------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------------------------
// HOMEWORK
// Example: WAP to Print the highest frequency character in a string
// Example: WAP to remove blank spaces from a string
// Example: WAP to replace lowercase letters with uppercase and uppercase letters with lowercase

