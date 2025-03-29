// ---------------------------------------------------------------------------
// In C, standard input/output functions are used to interact with the user or perform basic operations like reading input from the user or printing output to the screen. These functions are defined in the stdio.h (Standard Input Output) header file.
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
// Here are some common standard input/output functions in C:
 printf() // This function is used to print output to the screen. It takes
 // a string as an argument and prints it to the screen.
 // ---------------------------------------------------------------------------
 // Here is an example of how to use these functions:
 // ---------------------------------------------------------------------------
 #include <stdio.h>
 int main() {
     int num;
     printf("Enter a number: ");
     scanf("%d", &num);
     printf("You entered: %d", num);
     return 0;
    }
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
 scanf() // This function is used to read input from the user. It takes a string
// as an argument and stores the input in a variable.
// ---------------------------------------------------------------------------
// Here is an example of how to use these functions:
// ---------------------------------------------------------------------------
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d", num);
    return 0;
    }
// ---------------------------------------------------------------------------
// Note: The scanf() function is not as safe as other input functions like fgets() or gets because it does not check for buffer overflows. It is generally recommended to use fgets() or gets() instead of scanf() for reading input from the user.
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
fgets() // This function is used to read a line of input from the user. It takes a string as an argument and stores the input in that string.
// ---------------------------------------------------------------------------
// Here is an example of how to use fgets() functions:
// ---------------------------------------------------------------------------
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);
    return 0;
    }
// ---------------------------------------------------------------------------
// Note: The fgets() function includes the newline character in the input string.
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
puts() // This function is used to print a string to the console. It takes a string as an argument and prints it to the console.
// ---------------------------------------------------------------------------
// Here is an example of how to use this function:
// ---------------------------------------------------------------------------
#include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    puts(str);
    return 0;
    }
// ---------------------------------------------------------------------------
// Note: The puts() function automatically appends a newline character to the end of the string
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
gets() // This function is used to read a line of input from the user. It takes a string as an argument and stores the input in that string.
// ---------------------------------------------------------------------------
// Warning: The gets() function is not safe to use because it does not check for buffer overflows. It is generally recommended to use fgets() instead of gets() for reading input from the user.
// ---------------------------------------------------------------------------
// Here is an example of how to use these functions:
// ---------------------------------------------------------------------------
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a line of text: ");
    gets(str);
    printf("You entered: %s", str);
    return 0;
    }
// ---------------------------------------------------------------------------
// Note: The gets() function includes the newline character in the input string.
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
// scanf() vs fgets() vs gets() // These functions are used to read input from the user
// ---------------------------------------------------------------------------
 scanf() //is used to read a single value from the user.
 fgets() //is used to read a line of input from the user. It takes a string as
 gets() //is used to read a line of input from the user. It takes a string as
// ---------------------------------------------------------------------------
// Here is an example of how to use these functions:
// ---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int num;
    char str[100];
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);
    printf("You entered: %s", str);
    return 0;
    }
// ---------------------------------------------------------------------------
// Note: The scanf() function does not include the newline character in the input string.
// ---------------------------------------------------------------------------
// Note: The fgets() function includes the newline character in the input string.
// ---------------------------------------------------------------------------
// Note: The gets() function includes the newline character in the input string.
