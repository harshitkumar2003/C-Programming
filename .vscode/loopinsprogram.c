// #include<stdio.h>
//   int main ()
//   {
//       int num, i;
//       printf("Enter a num: ");
//       scanf("%d", &num);
//       for(i = 1; i <= num; i++)
//       {
    //            printf("hello world\n");
//       }
//      return 0;
//   }

// ----------------------------------------------------------------------
    // #include<stdio.h>
    //   int main ()
    //   {
    //       for(int i = 'a'; i <= 'z'; i++)
    //       {
    //            printf("%c\n",i);
    //       }
    //      return 0;
    // }

// -----------------------------------------------------------------------
    // #include<stdio.h>
    //   int main ()
    //   {
    //       for(int i = 10; i >= 0; i--)
    //       {
    //            printf("%d\n",i);
    //       }
    //      return 0;
    // }

// -----------------------------------------------------------------------
// this program prints -ve number upto 10 in single for loop with declaring two variable at same time
 #include<stdio.h>
   int main ()
   {
    int i,j;
       for(i = 0,j = i; i <= 10 && j <= i; i++,j--)
       {
            printf("%d\n",i);
       }
      return 0;
   }

