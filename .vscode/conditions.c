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