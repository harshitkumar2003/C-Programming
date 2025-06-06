#include<stdio.h>  
#include<conio.h>  
int main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);// taking value from the user
    printf("Enter the second number: ");
    scanf("%d",&b);// taking value from the user
    printf("Enter the third number: ");
    scanf("%d",&c);// taking value from the user

// -----------------
    // condition 
// -----------------
    // 1. Basic if statement: if conditions allow you to execute certain blocks of code based on whether a specified condition is true or false
    // for example 
    // int a = 5;
    // if (a > 0) {
    //     printf("a is positive\n");
    // }

// -----------------------------------------------------------------------------------------------
    // 2. if-else statement: An if statement can be followed by an else statement, which is executed if the condition is false.
    // for example
    // int a = 5;
    // if (a > 0) {
    //     printf("a is positive\n");
    // } else {
    //     printf("a is not positive\n");
    // }

// -----------------------------------------------------------------------------------------------
    // 3. if-else if-else chain: multiple if conditions with else if to check more than one condition in sequence.
    // for example 
    // int a = 0;
    // if (a > 0) {
    //     printf("a is positive\n");
    // } else if (a == 0) {
    //     printf("a is zero\n");
    // } else {
    //     printf("a is negative\n");
    // }

// ------------------------------------------------------------------------------------------------
    // 4. Nested if statements: if statements inside other if statements, which is known as nesting.
    // for example 
    // int a = 5;
    // int b = 10;
    // if (a > 0) {
    //     if (b > 5) {
    //  printf("a is positive and b is greater than 5\n");
    //   }
    //}

// ------------------------------------------------------------------------------------------------
// checking largest values using if else condition
    if(a>b && a>c)  // if a greater than b and greater than c
    {
        printf("%d is the largest number",a);
        }
        else if(b>a && b>c)  // if b greater than a and greater than c
        {
            printf("%d is the largest number",b);
            }
            else  // if both condition is fail than c is largest
            {
                printf("%d is the largest number",c);
                }
                return 0;
}
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// ==============
// switch case
// ==============
// switch (expression) {
//     case value1:
//         // code to be executed if expression equals value1
//         break;
//     case value2:
//         // code to be executed if expression equals value2
//         break;
//     default:
//         // code to be executed if expression does not match any case value
//         break;
// }
// ------------------------------------------------------------------------------------------------
// example of switch case
 int a = 5;
 switch (a) {
     case 1:
         printf("a is 1");
         break;
     case 2:
         printf("a is 2");
         break;
     case 3:
         printf("a is 3");
         break;
     case 4:
         printf("a is 4");
         break;
     case 5:
         printf("a is 5");
         break;
     default:
         printf("a is not 1,2,3,4,5");
         break;
 }
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
//  =============
// goto statement
// =============
// goto label;
// label: statement;
// ------------------------------------------------------------------------------------------------
// example of goto statement
 #include <stdio.h>
 int main() {
    int num = 0;

    start: // This is the label
        printf("Enter a number greater than 0: ");
        scanf("%d", &num);

        // Using goto to jump to a different part of the code
        if (num <= 0) {
            printf("Invalid number. Please try again.\n");
            goto start; // Jumps back to the "start" label
        }

    printf("You entered a valid number: %d\n", num);
    
    return 0;
}
// ------------------------------------------------------------------------------------------------
// Important Notes:
// Label Definition: A label is just a name followed by a colon (:). You can place labels anywhere in your program, but they must be placed before the point where you want to jump.

// Program Flow: The goto statement immediately transfers control to the specified label, skipping over any code in between.

// Avoid Excessive Use: The goto statement can make programs difficult to understand and maintain because it breaks the natural flow of execution. It's often discouraged in favor of more structured control statements like loops (for, while) and conditionals (if-else).

// Use in Loops: goto can be used to exit from deeply nested loops, but structured loops are generally clearer and more maintainable.
// ------------------------------------------------------------------------------------------------



// ==================================
//       conditions finished
// ==================================