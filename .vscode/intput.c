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