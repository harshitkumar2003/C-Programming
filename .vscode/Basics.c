// C is a foundational programming language 
// Lets start with basics

// --------------------------------------------------
// Part 1 Basics (Variables, Operators, Input/Output)
// --------------------------------------------------
#include<stdio.h>   // header file / preprocessor directives 
int main()  // main fucntion in a c program atleast one function will be present
{
    // variable is where we store a value (a is a variable)
    // operators is mathematical task to be assign for a result ( = is a operator 10 is assign to a) 
    int a=10; 
    // displaying hello world (printf is used for display message or output)  
    printf("hello world");  
    // Escape Sequence 
    // (\n for new line)
    // (\t for spacing 4 blocks)
    printf("\n\t");
    printf("hello Harshit"); 
    //  we can perform calculation while displaying (addition of 10+10)
    //  %d is a format specifier for displaying integer
    //  %c is a format specifier for displaying character 
    //  %s is a format specifier for displaying string
    //  %f is a format specifier for displaying floating number
    printf("\n%d",a+a);
    return 0;  // end a program
}



