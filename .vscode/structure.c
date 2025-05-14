// =======================================
// structure
// =======================================
// ------------------------------------------------------------------------------------------------------------
// A structure in C is a user-defined data type that allows you to group related variables of different types into a single unit. It is similar to a class in object-oriented programming but does not support methods or inheritance.

// Structures are useful for organizing complex data and creating custom data types.
// They can contain variables of different types, including arrays and other structures.
// Structures are defined using the struct keyword, followed by the structure name and the members enclosed in curly braces.
// The members can be of different data types, and you can access them using the dot operator (.) after creating a structure variable.

// syntax:
// struct structure_name {
//     data_type member1;
//     data_type member2;
//     // Add more members as needed
// };
// ------------------------------------------------------------------------------------------------------------
// Example: WAP to create a structure to store student details (name, roll number, and marks) and print them
#include <stdio.h>
struct Student { // Define a structure named Student
    char name[50]; // Member to store the student's name
    int rollNumber; // Member to store the student's roll number
    float marks; // Member to store the student's marks
};
int main() {
    struct Student student1; // Declare a variable of type Student

    // Input student details
    printf("Enter student's name: ");
    scanf("%s", student1.name);
    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}