// -------------------------------------------------------------------------------------------------
// WAP to check the number is divisible 2 or not

// #include<stdio.h>
// int main ()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(num % 2 == 0)   (if the number of a remainder will be zero it will divisible by 2)
//     {
//          printf("the number is divisible by 2");
//     }
//     else
//     printf("the number is not divisible by 2");
//     return 0;
// }
// -------------------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------------------
// WAP to check if 1(true) or 0(false) for following statement:
// if it's sunday and it's snowing = true
// if it's monday or it's raining = true
// if a number is greater than 9 and less than 100 = true

//  #include<stdio.h>
//  int main ()
//  {
//      int sunday = 1;
//      int snowing = 1;
//      if(sunday && snowing == 1)
//      printf("true");
//     else
//     printf("false");
//     return 0;
//  }
//  -------------------------------------------------------------------------------------------------

//  #include<stdio.h>
//  int main ()
//  {
//      int monday = 1;
//      int raining = 0;
//      if(monday || raining == 1)
//      printf("true");
//     else
//     printf("false");
//     return 0;
//  }
//  ------------------------------------------------------------------------------------------------

//  #include<stdio.h>
//  int main ()
//  {
//      int num;
//      printf("Enter a number: ");
//      scanf("%d", &num);
//      if(num > 9 && num < 100)
//      printf("true");
//     else
//     printf("false");
//     return 0;
//  }
// ------------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------------
// Homework Question
// 1. WAP to print the average of 3 numbers

// #include<stdio.h>
//  int main ()
//  {
//    float a,b,c;
//    float avg;
//      printf("Enter a number: ");
//      scanf("%f", &a);
//      printf("Enter a number: ");
//      scanf("%f", &b);
//      printf("Enter a number: ");
//      scanf("%f", &c);
//      avg = (a+b+c) / 3;
//      printf("the average of 3 number is: %f",avg);
//     return 0;
//  }
// ------------------------------------------------------------------------------------------------


//  -----------------------------------------------------------------------------------------------
// 2. WAP to check if given character is digit or not

// #include<stdio.h>
//   int main ()
//   {
//       char ch;
//       printf("Enter a character: ");
//       scanf("%c", &ch);
//       if(ch >= '0' && ch <= '9')
//       {
//            printf("Given character is digit");
//       }
//      else
//      {
//            printf("Given character is not a digit");
//      }
//      return 0;
//   }
//  ----------------------------------------------------------------------------------------------


//  ----------------------------------------------------------------------------------------------
// 3. WAP to print the smallest number

// #include<stdio.h>
//   int main ()
//   {
//       int num1, num2;
//       printf("Enter a number 1: ");
//       scanf("%d", &num1);
//       printf("Enter a number 2: ");
//       scanf("%d", &num2);
//       if(num1 < num2)
//       {
//            printf("smallest number is: %d",num1);
//       }
//      else
//      {
//            printf("smallest number is: %d",num2);
//      }
//      return 0;
//   }
// ----------------------------------------------------------------------------------------------


//  ----------------------------------------------------------------------------------------------
// WAP to check if a student passed or failed

#include<stdio.h>
  int main ()
  {
      int m;
      printf("Enter marks 0 to 100: ");
      scanf("%d", &m);
      if(m >=0 && m <= 30)
      {
           printf("Fail");
      }
      else if(m >= 30 && m <= 100)
      {
        printf("Pass");
      }
     else
     {
           printf("Wrong Marks");
     }
     return 0;
  }