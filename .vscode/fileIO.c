// =============================
// fileIO.c
// =============================
//  File Input/Output in C
//  File I/O in C allows you to read from and write to files, enabling persistent data storage and retrieval.
//  It is essential for applications that require data to be saved beyond the program's execution.
//  File I/O operations are performed using standard library functions such as fopen(), fclose(), fprintf(), fscanf(), and others.
//  These functions allow you to open files, read data from files, write data to files, and close files when done.
// File I/O is crucial for applications that need to store and retrieve data, such as databases, configuration      files, and logs.
// File I/O operations are performed using standard library functions such as fopen(), fclose(), fprintf(), fscanf(), and others.
// These functions allow you to open files, read data from files, write data to files, and close files when done.
// ============================

// ------------------------------------------------------------------------------------------------
// File Operations
// File I/O operations in C include opening files, reading from files, writing to files, and closing files.
// These operations are performed using standard library functions such as fopen(), fclose(), fprintf(), fscanf(), and others.
// The fopen() function is used to open a file, specifying the mode (read, write, append, etc.) in which the file should be accessed.
// The fclose() function is used to close a file when you are done with it.
// The fprintf() function is used to write formatted data to a file, while the fscanf() function is used to read formatted data from a file.
// The fgetc() and fputc() functions are used to read and write characters to a file, respectively.
// The fread() and fwrite() functions are used to read and write binary data to a file.
// The fseek() function is used to move the file pointer to a specific position in the file, allowing random access to data.
// The ftell() function is used to get the current position of the file pointer, and the rewind() function is used to reset the file pointer to the beginning of the file.
// The feof() function is used to check if the end of the file has been reached, and the ferror() function is used to check for errors during file operations.

// syntax:
// fopen(filename, mode);
// fclose(file_pointer);
// fprintf(file_pointer, format, ...);
// fscanf(file_pointer, format, ...);
// fgetc(file_pointer);
// fputc(character, file_pointer);
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// Types of files
// syntax:
// file = fopen(filename, mode);

// In C, files can be categorized into two main types: text files and binary files.
// Text files store data in a human-readable format, where each line is typically terminated by a newline character.
// Binary files store data in a format that is not human-readable, allowing for more efficient storage and retrieval of complex data structures.
// Text files are often used for configuration files, logs, and simple data storage, while binary files are used for more complex data structures such as images, audio, and video files.
// Text files are easier to read and edit using text editors, while binary files require specific programs to interpret the data.
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// File pointer
// syntax:
// file_pointer = fopen(filename, mode);

// A file pointer in C is a pointer that points to a file stream, allowing you to perform operations on the file.
// It is used to keep track of the current position in the file and is essential for reading from and writing to files.
// The file pointer is created when you open a file using the fopen() function, and it is used in subsequent file operations such as reading, writing, and closing the file.
// The file pointer is of type FILE*, which is defined in the stdio.h header file.
// It is important to check if the file pointer is NULL after opening a file to ensure that the file was opened successfully.
// The file pointer is used in functions like fprintf(), fscanf(), fgetc(), fputc(), fread(), fwrite(), and others to perform file operations.
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// File modes
// syntax:
// file = fopen(filename, mode);
// The mode parameter in the fopen() function specifies how the file should be opened and accessed.
// The common file modes in C include:
// "r" - Read mode: Opens the file for reading. The file must exist.
// "w" - Write mode: Opens the file for writing. If the file exists, it is truncated to zero length; if it does not exist, a new file is created.
// "a" - Append mode: Opens the file for writing at the end of the file. If the file does not exist, a new file is created.
// "r+" - Read/Write mode: Opens the file for both reading and writing. The file must exist.
// "w+" - Write/Read mode: Opens the file for both reading and writing. If the file exists, it is truncated to zero length; if it does not exist, a new file is created.
// "a+" - Append/Read mode: Opens the file for both reading and writing at the end of the file. If the file does not exist, a new file is created.
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// Example: WAP to check if a file exists and open it in read mode
// #include <stdio.h>
// int main() {
// FILE *file;
// file = fopen("data.txt", "r"); // Open the file in read mode
// // Check if the file was opened successfully
// if (file == NULL) {
//     printf("Error opening file.\n");
//     return 1; // Exit if the file cannot be opened
// }
// else
// {
//     printf("File opened successfully.\n");
// }
// fclose(file); // Close the file after use
// return 0;
// } // End of main function
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// Example: WAP to write data to a file in w mode if not exists, or overwrite if exists
// #include <stdio.h>
// int main() {
//     FILE *file;
//     file = fopen("data.txt", "w"); // Open the file in write mode
//     // Check if the file was opened successfully
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1; // Exit if the file cannot be opened
//     }
//     fprintf(file, "Hello, World!\n"); // Write data to the file
//     fclose(file); // Close the file after use
//     printf("Data written to file successfully.\n");
//     return 0; // End of main function
// }
// ------------------------------------------------------------------------------------------------

 
// ------------------------------------------------------------------------------------------------
// Example: WAP to read data from a file in r mode and add data to it in a mode that allows appending
// #include <stdio.h>
// int main() {
//     FILE *file;
//     char ch[100];
//     file = fopen("data.txt", "r"); // Open the file in read mode
//     // Check if the file was opened successfully
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1; // Exit if the file cannot be opened
//     }
//     else
//     {
//         printf("File opened successfully.\n");
//     }
//     // Read data from the file
//     while (fgets(ch, sizeof(ch), file) != NULL) {
//         printf("%s", ch); // Print each line read from the file
//     }
//     fclose(file); // Close the file after use
  
//     file = fopen("data.txt", "a"); // Open the file in append mode
//     // Check if the file was opened successfully
//     if (file == NULL) {
//         printf("Error opening file for appending.\n");
//         return 1; // Exit if the file cannot be opened
//     }
//     fprintf(file, "Appending new data to the file.\n"); // Write data to the file

//     return 0; // End of main function
// }
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// Example: WAP to read the output and print using EOF 
// #include <stdio.h>
// int main() {
//     FILE *file;
//     char ch;
//     file = fopen("data.txt", "r"); // Open the file in read mode
//     ch = fgetc(file); // Read a character from the file
//     // Check if the file was opened successfully
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1; // Exit if the file cannot be opened
//     }
//     else
//     {
//         printf("File opened successfully.\n");
//     }
//     // Read data from the file until EOF is reached
//  while (ch != EOF) {
//         printf("%c", ch); // Print each character read from the file
//         ch = fgetc(file); // Read the next character from the file
//     }

//     fclose(file); // Close the file after use
//     return 0; // End of main function
// }
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// Example: WAP to read the output and print using fgetc for numbers
// #include <stdio.h>
// int main() {
//     FILE *file;
//     int num;
//     file = fopen("data.txt", "r"); // Open the file in read mode
//     num = fgetc(file); // Read a character from the file
//     // Check if the file was opened successfully
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1; // Exit if the file cannot be opened
//     }
//     else
//     {
//         printf("File opened successfully.\n");
//     }
//     // Read data from the file until EOF is reached
//  while (num != EOF) {
//         printf("%c", num); // Print each number read from the file
//         num = fgetc(file); // Read the next character from the file
//     }

//     fclose(file); // Close the file after use
//     return 0; // End of main function
// }
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// Example: WAP to input student data and write it to a file using fprintf
// #include <stdio.h>
// int main() {
//     FILE *file;
//     char name[50];
//     int roll_no;
//     float marks;
//     file = fopen("students.txt", "w"); // Open the file in write mode
//     // Check if the file was opened successfully
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1; // Exit if the file cannot be opened
//     }
//     else
//     {
//         printf("File opened successfully.\n");
//     }
//     // Input student data
//     printf("Enter student name: ");
//     fscanf(stdin, "%49s", name); // Read student name
//     printf("Enter roll number: ");
//     fscanf(stdin, "%d", &roll_no); // Read roll number
//     printf("Enter marks: ");
//     fscanf(stdin, "%f", &marks); // Read marks
//     // Write student data to the file
//     fprintf(file, "Name: %s\nRoll No: %d\nMarks: %.2f\n", name, roll_no, marks); // Write formatted data to the file
//     fclose(file); // Close the file after use
//     return 0; // End of main function
// }
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// Example: WAP to write all the odd nubers from 1 to n to a file using fprintf
// #include <stdio.h>
// int main() {
//     FILE *file;
//     int n, i;
//     file = fopen("odd_numbers.txt", "w"); // Open the file in write mode
//     // Check if the file was opened successfully
//     if (file == NULL) {
//         printf("Error opening file.\n");
//         return 1; // Exit if the file cannot be opened
//     }
//     else
//     {
//         printf("File opened successfully.\n");
//     }
//     // Input the value of n
//     printf("Enter a number: ");
//     fscanf(stdin, "%d", &n); // Read the value of n
//     // Write odd numbers to the file
//     for (i = 1; i <= n; i++) {
//         if (i % 2 != 0) // Check if the number is odd
//         fprintf(file, "%d\n", i); // Write each odd number to the file
//     }
//     fclose(file); // Close the file after use
//     return 0; // End of main function
// }
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// Example: WAP to write all the even nubers from 1 to n to a file using fprintf
#include <stdio.h>
int main() {
    FILE *file;
    int n, i;
    file = fopen("odd_numbers.txt", "w"); // Open the file in write mode
    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit if the file cannot be opened
    }
    else
    {
        printf("File opened successfully.\n");
    }
    // Input the value of n
    printf("Enter a number: ");
    fscanf(stdin, "%d", &n); // Read the value of n
    // Write odd numbers to the file
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) // Check if the number is odd
        fprintf(file, "%d\n", i); // Write each odd number to the file
    }
    fclose(file); // Close the file after use
    return 0; // End of main function
}
// ------------------------------------------------------------------------------------------------