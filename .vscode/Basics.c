// C is a foundational programming language 
// Lets start with basics

// --------------------------------------------------
// Part 1 Basics (Variables, Operators, Input/Output)
// --------------------------------------------------
#include<stdio.h>   // header file / preprocessor directives 
int main()  // main fucntion in a c program atleast one function will be present
{
    // variable is where we store a value (a and b is a variable)
    // operators is mathematical task to be assign for a result ( =,+,-,*,/ is a operator 10 is assign to a) 
    int a=10; 
    int b=3;

    // displaying hello world (printf is used for display message or output)  
    printf("hello world");  

    // Use of escape sequence 
    // (\n for new line)
    // (\t for spacing 4 blocks)
    printf("\nhello Harshit"); 
    printf("\thello user\n"); 

    // for displaying values of a variable
    //  %d is a format specifier for displaying integer
    //  %c is a format specifier for displaying character 
    //  %s is a format specifier for displaying string
    //  %f is a format specifier for displaying floating number
    printf("%d",a);
    printf("\n%d",b);

    // Aruthmetic operation using operation
    // addition
    printf("\n%d",a+b);
    // subtraction
    printf("\n%d",a-b);
    // multiplication
    printf("\n%d",a*b);
    // division
    printf("\n%d",a/b);
    return 0;  // end a program
}



