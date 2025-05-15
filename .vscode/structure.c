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
// #include <stdio.h>
// struct Student { // Define a structure named Student
//     char name[50]; // Member to store the student's name
//     int rollNumber; // Member to store the student's roll number
//     float marks; // Member to store the student's marks
// };
// int main() {
//     struct Student student1; // Declare a variable of type Student

//     // Input student details
//     printf("Enter student's name: ");
//     scanf("%s", student1.name);
//     printf("Enter roll number: ");
//     scanf("%d", &student1.rollNumber);
//     printf("Enter marks: ");
//     scanf("%f", &student1.marks);

//     // Print student details
//     printf("\nStudent Details:\n");
//     printf("Name: %s\n", student1.name);
//     printf("Roll Number: %d\n", student1.rollNumber);
//     printf("Marks: %.2f\n", student1.marks);

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Array of Structures:
// An array of structures is a collection of multiple structure variables, allowing you to store and manage multiple records of the same type.
// This is useful when you need to handle a list of similar data items, such as a list of students or employees.
// You can declare an array of structures by specifying the structure type followed by the array size and then access individual structure members using the array index.
// syntax structure:
struct company emp[100];
struct company manager[20];
struct company CEO[10];

// Accessing of array of structure:
emp[0].name = "Harry";
manager[0].department = "IT Dept.";
CEO[0].branch = "banglore";
// structure varuable.arrayindex[].entities = values 
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Initialize structure in single line
struct company emp = {"Harry", 61, 8.11}; 
// structure variable = values{name, rollno, cgpa}
struct company emp = {0};
// All entities will filled zero 0 
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Structure to pointer
struct company emp;
struct company *ptr;
ptr = &emp;
printf("name = %s",(*ptr).name);
// NOTE: * with ptr always in parenthesis
printf("name = %s",(*ptr) -> name);
// Arrow operator we can also use arrow operator in field of dot operator for  easy understanding 
// (*ptr).roll
// format
// (*ptr) -> roll
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Passing structure to function
//syntax:
#include <stdio.h>
struct structure_name {
    member 1;
    member 2;
    member n; (needs depends on programmer)
};
void function_name(struct structure_name structure_variable);
// NOTE: function always define after the structure definition
int main() {
    statement
    ..........
    ........
    ....
}
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Typdef keyword 
// Used to create alias(alternative name)/(nickname for structure) for data types
typedef struct company {
    member 1;
    member 2;
    member n;
}cpy; // cpy is a alias for company structure
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: Using typedef keyword create a structure and initialize values in variables.
#include <stdio.h>
#include <string.h>
struct computersciencestudent {
    int rollNumber;
    float cgpa;
    char name[20];
}css;
int main() {
    struct css detail;
    detail.rollNumber = 13;
    detail.cgpa = 9.4;
    strcpy(detail.name,"Harry")
printf("student rollNumber = %s\n",detail.rollNumber);
printf("student cgpa = %s\n",detail.cgpa);
printf("student name = %s\n",detail.name);
return 0;
}
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: WAP to create an array of structures to store details of multiple students and print them
#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100 // Maximum number of students
// Define a structure named Student
struct Student {
    char name[50]; // Member to store the student's name
    int rollNumber; // Member to store the student's roll number
    float marks; // Member to store the student's marks
};
int main() {
    struct student S1;

}
// ---------------------------------------------------------------------------------------------------------











// ------------------------------------------------------------------------------------------------------------
