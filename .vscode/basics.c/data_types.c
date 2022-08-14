#include <stdio.h>

int main()
{
  /* A Program that specify data types in C
   * @int - Print integer data type %d
   * @char - Print character data type %c
   * @float/double - Print floating point data type %f
   */

char c1 , c2;
c1 = 'Z';
c2 = 'z';
printf("The numeric value of Z is %d \n" , c1);
printf("The numeric value of z is %d \n" , c2);

int n1 , n2;
n1 = 72;
n2 = 104;
printf("The character value of 72 is %c\n" , n1);
printf("The character value of 104 is %c\n" , n2);

char new; 
new = '\n';
printf("The numeric value of a new line character is %d\n" , new);

double dbl_num;
dbl_num = 123.456;
printf("The floating point result is %f" , dbl_num);
return(0);
}