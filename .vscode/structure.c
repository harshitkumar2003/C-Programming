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
// struct company emp[100];
// struct company manager[20];
// struct company CEO[10];

// Accessing of array of structure:
// emp[i].name
// emp[i].rollno
// emp[i].cgpa

/* emp[0].name = "Harry";
manager[0].department = "IT Dept.";
CEO[0].branch = "banglore"; */

// structure varuable.arrayindex[].entities = values 
// Here, emp, manager, and CEO are arrays of structures, each capable of holding multiple records of the respective structure type.
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Initialize structure in single line
// syntax:
// struct structure_name variable_name = {value1, value2, value3, ...};
// Example: WAP to create a structure to store student details and initialize them in a single line
// #include <stdio.h>
// struct Student {
//     char name[50];
//     int rollNumber;
//     float marks;
// };
// int main() {
//     struct Student student1 = {"John Doe", 101, 85.5}; // Initialize structure in a single line
//     printf("Name: %s\n", student1.name);
//     printf("Roll Number: %d\n", student1.rollNumber);// Accessing structure members
//     printf("Marks: %.2f\n", student1.marks);
//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Structure to pointer
// A pointer to a structure allows you to access the members of the structure using the arrow operator (->) or dereferencing the pointer with the dot operator (*).
// syntax:
// struct structure_name *pointer_name;

// Example: WAP to create a structure to store student details and access them using a pointer*/

// #include <stdio.h>
// struct Student {
//     char name[50];
//     int rollNumber;
//     float marks;
// };
// int main() {
// struct Student student1 = {"John Doe", 101, 85.5}; // Initialize structure in a single line
// printf("Name: %s\n", student1.name);
// printf("Roll Number: %d\n", student1.rollNumber); // Accessing structure members
// printf("Marks: %.2f\n", student1.marks);

// // Create a pointer to the structure
// struct Student *ptr = &student1; // Pointer to the structure
// // Accessing structure members using pointer
// printf("\nUsing Pointer:\n");
// printf("Name: %s\n", ptr->name); // Using arrow operator
// printf("Roll Number: %d\n", ptr->rollNumber); // Using arrow operator
// printf("Marks: %.2f\n", ptr->marks); // Using arrow operator
// return 0;
// }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Passing structure to function
// You can pass a structure to a function by value or by reference (using pointers).
// Passing by value means that a copy of the structure is made, and changes made to the structure inside the function do not affect the original structure.
//syntax:
// #include <stdio.h>
// struct structure_name {
//     member 1;
//     member 2;
//     member n; (needs depends on programmer)
// };
// void function_name(struct structure_name structure_variable);
// // NOTE: function always define after the structure definition
// int main() {
//     statement
//     ..........
//     ........
//     ....
// }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Typdef keyword 
// Used to create alias(alternative name)/(nickname for structure) for data types
// typedef struct company {
//     member 1;
//     member 2;
//     member n;
// }cpy; // cpy is a alias for company structure
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: Using typedef keyword create a structure and initialize values in variables.
// #include <stdio.h>
// #include <string.h>
// struct computersciencestudent {
//     int rollNumber;
//     float cgpa;
//     char name[20];
// }css;
// int main() {
//     struct css detail;
//     detail.rollNumber = 13;
//     detail.cgpa = 9.4;
//     strcpy(detail.name,"Harry")
// printf("student rollNumber = %s\n",detail.rollNumber);
// printf("student cgpa = %s\n",detail.cgpa);
// printf("student name = %s\n",detail.name);
// return 0;
// }
// // ------------------------------------------------------------------------------------------------------------


// // ------------------------------------------------------------------------------------------------------------
// // Example: WAP to read and print details(houseno,block,city,state) of 5 people
// #include <stdio.h>
// #include <string.h>
// struct people {
//     int houseno;
//     int block;
//     char city[20];
//     char state[20];
// };
// int main() {
//     struct people detail[5];
//     for(int i = 0; i <= detail[i]; i++)
//     {
//         printf("enter details of people: %d",i+1);
//         scanf("houseno = %d",&detail[i].houseno);
//         scanf("block = %d",&detail[i].block);
//         scanf("city = %s",&detail[i].city);
//         scanf("state = %s",&detail[i].state);
//     }
//    for(int i = 0; i <= detail[i]; i++)
//     {
//         printf("details of people: %d",i+1);
//         printf("houseno = %d",detail[i].houseno);
//         printf("block = %d",detail[i].block);
//         printf("city = %s",detail[i].city);
//         printf("state = %s",detail[i].state);
//     }

// return 0;
// }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: WAP to create a structure to store vectors, then make a function to return sum of two verctors.
// #include <stdio.h>
// struct vector {
//     int x;
//     int y;
// };
// void calculate(struct vector v1,struct vector v2,struct vector sum);
// void calculate(struct vector v1,struct vector v2,struct vector sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("sum of x is %d",sum.x);
//     printf("sum of x is %d",sum.y);
// }
// int main() {
//     struct vector v1;
//     struct vector v2;
//     struct vector sum == {0};

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: WAP to create an array of structures to store details of multiple students and print them
// #include <stdio.h>
// #include <string.h>
// #define MAX_STUDENTS 100 // Maximum number of students
// // Define a structure named Student
// struct Student {
//     char name[50]; // Member to store the student's name
//     int rollNumber; // Member to store the student's roll number
//     float marks; // Member to store the student's marks
// };
// int main() {
//     struct student S1;

// }
// ---------------------------------------------------------------------------------------------------------











// ------------------------------------------------------------------------------------------------------------
