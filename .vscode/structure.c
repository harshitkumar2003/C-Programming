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
// void function_name(struct structure_name structure_variable);
// Passing by reference means that a pointer to the structure is passed, allowing the function to modify the original structure.
// Passing by reference is more efficient for large structures as it avoids copying the entire structure.

// Example: WAP to create a structure to store student details and pass it to a function

// #include <stdio.h>
// struct Student {
//     char name[50];
//     int rollNumber;
//     float marks;
// };
// // Function to print student details
// void printStudentDetails(struct Student student) {
//     printf("Name: %s\n", student.name);
//     printf("Roll Number: %d\n", student.rollNumber);
//     printf("Marks: %.2f\n", student.marks);
// }
// // Function to modify student details
// void modifyStudentDetails(struct Student *student) {
//     // Modify the student details
//     student->rollNumber += 1; // Increment roll number
//     student->marks += 5.0; // Add 5 marks
// }
// int main() {
//     struct Student student1 = {"John Doe", 101, 85.5}; // Initialize structure in a single line
//     printf("Original Student Details:\n");
//     printStudentDetails(student1); // Print original details

//     // Modify student details using a function
//     modifyStudentDetails(&student1); // Pass structure by reference
//     printf("\nModified Student Details:\n");
//     printStudentDetails(student1); // Print modified details

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Typdef keyword 
// The typedef keyword in C is used to create an alias (alternative name) for a data type, including structures. It allows you to define a new name for an existing type, making your code more readable and easier to maintain.
// Used to create alias(alternative name)/(nickname for structure) for data types
// syntax:
// typedef existing_type new_type_name;

// Example: WAP to create a structure to store student details and use typedef to create an alias for the structure
//  #include <stdio.h>

//  typedef struct {
//      char name[50];
//      int rollNumber;
//      float marks;
//  } Student; // Create an alias for the structure
//  int main() {
//         Student student1 = {"John Doe", 101, 85.5}; // Use the alias to declare a structure variable
//         printf("Name: %s\n", student1.name);
//         printf("Roll Number: %d\n", student1.rollNumber);
//         printf("Marks: %.2f\n", student1.marks);
//         return 0;
//     }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: Using typedef keyword create a structure and initialize values in variables.
//  #include <stdio.h>
//  #include <string.h>
//  struct computersciencestudent {
//      int rollNumber;
//      float cgpa;
//      char name[20];
//  }css;

//  int main() {
//     css.rollNumber = 13;
//     css.cgpa = 9.4;
//     strcpy(css.name, "Harry"); // Using strcpy to copy string into the character array
//     // Alternatively, you can initialize the structure in a single line
//     // struct computersciencestudent css = {13, 9.4, "Harry"};
//  printf("student rollNumber = %d\n",css.rollNumber);
//  printf("student cgpa = %f\n",css.cgpa);
//  printf("student name = %s\n",css.name);
//  return 0;
//  }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: WAP to read and print details(houseno,block,city,state) of 5 people

//  #include <stdio.h>
//  struct person {
//      int houseno;
//      int block;
//      char city[20];
//      char state[20];
//  };
//  int main() {
//      struct person detail[5];
//         // Initialize the structure array with zero values
//         for(int i = 0; i < 5; i++) {
//          printf("\nenter details of person: %d\n",i+1);
//          scanf("%d\n",&detail[i].houseno);
//          scanf("%d\n",&detail[i].block);
//          scanf("%s\n",&detail[i].city);
//          scanf("%s",&detail[i].state);
//      }
//         for(int i = 0; i < 5; i++)
//      {
//          printf("\ndetails of person: %d\n",i+1);
//          printf("houseno = %d\n",detail[i].houseno);
//          printf("block = %d\n",detail[i].block);
//          printf("city = %s\n",detail[i].city);
//          printf("state = %s\n",detail[i].state);
//      }
//  return 0;
//  }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: WAP to create a structure to store vectors, then make a function to return sum of two verctors.
//  #include <stdio.h>
//  struct vector {
//      int x;
//      int y;
//  };
//  void calculate(struct vector v1,struct vector v2,struct vector sum);
//  void calculate(struct vector v1,struct vector v2,struct vector sum) {
//      sum.x = v1.x + v2.x;
//      sum.y = v1.y + v2.y;
//      printf("sum of x is %d\t",sum.x);
//      printf("sum of y is %d",sum.y);
//  }
//  int main() {
//      struct vector v1 = {3, 4}; // Initialize vector v1
//      struct vector v2 = {5, 6}; // Initialize vector v2
//      struct vector sum = {0}; // Initialize sum vector to zero
//      calculate(v1, v2, sum); // Call the function to calculate the sum of vectors
//      return 0;
//  }

// ------------------------------------------------------------------------------------------------------------
// Example: WAP to create a structure to store complex numbers (using arrow operator)
// #include <stdio.h>
// struct Complex {
//     float real;
//     float imag;
// };
// int main() {
//     struct Complex num1, num2, sum; // Declare three complex number variables
//     // Input first complex number
//     printf("Enter first complex number (real and imaginary parts): ");
//     scanf("%f %f", &num1.real, &num1.imag);
//     // Input second complex number
//     printf("Enter second complex number (real and imaginary parts): ");
//     scanf("%f %f", &num2.real, &num2.imag);
    
//     // Calculate the sum of the two complex numbers
//     sum.real = num1.real + num2.real;
//     sum.imag = num1.imag + num2.imag;

//     // Print the result using arrow operator
//     printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);
    
//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// Example: WAP to create a structure to store bank account information of a customer (account number, name, balance).
#include <stdio.h>
struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};
int main() {
    struct BankAccount account; // Declare a variable of type BankAccount
    // Input bank account details
    printf("Enter account number: ");
    scanf("%d", &account.accountNumber);
    printf("Enter name: ");
    scanf("%s", account.name);
    printf("Enter balance: ");
    scanf("%f", &account.balance);

    // Print bank account details
    printf("\nBank Account Details:\n");
    printf("Account Number: %d\n", account.accountNumber);
    printf("Name: %s\n", account.name);
    printf("Balance: %.2f\n", account.balance);

    return 0;
}
// ------------------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------