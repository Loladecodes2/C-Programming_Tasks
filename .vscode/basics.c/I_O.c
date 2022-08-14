#include <stdio.h>

/* A Program Handling Standard Input and Output
 * @getc(stdin) function - reads the next char from a file and returns the char as an int
 * @putc(stdout) function - write a character to the specified file stream
 * @getchar() function - perform similar function to getc()
 * @putchar() function - perform similar function to putc(),but takes only one argument
 * @printf() function - print out messages on the screen
 */

int main()
{
  // A Program to put the characters B, y, and e together on the screen.//
  putchar(66);
  putchar(121);
  putchar(101);
  putchar(10);

// A a Program that prints the integers on the screen in the hex format.//
int num1,num2,num3;
num1 = 15;
num2 = 150;
num3 =1500;
printf("The hexadecimal format of 15 is 0x%04X\n", num1);
printf("The hexadecimal format of 150 is 0x%04X\n", num2);
printf("The hexdecimal format of 1500 is 0x%04X\n", num3);

// A Program that uses getchar() and putchar() to read in a character entered by the user and write the character to the screen.//
int ch;
printf("Enter a character:\n");
ch = getchar();
putchar(ch);
return(0);
}